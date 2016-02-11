from django.shortcuts import render
from django.http import HttpResponse
from models import Category, Page
from rango.forms import CategoryForm, PageForm

def index(request):
    # Query the database for a list of ALL categories currently stored.
    # Order the categories by no. likes in descending order.
    # Retrieve the top 5 only - or all if less than 5.
    # Place the list in our context_dict dictionary which will be passed to the template engine.
    category_list = Category.objects.order_by('-likes')[:5]
    pages_list = Page.objects.order_by('-views')[:5]
    context_dict = {'categories': category_list, 'pages': pages_list}

    return render(request, 'rango/index.html', context_dict)
    
def about(request):
	return HttpResponse("This is an about page! <br/><a href='/rango/'>Index</a>")
	
def add_page(request, category_name_slug):
    try:
        cat = Category.objects.get(slug=category_name_slug)
    except Category.DoesNotExist:
                cat = None

    if request.method == 'POST':
        form = PageForm(request.POST)
        if form.is_valid():
            if cat:
                page = form.save(commit=False)
                page.category = cat
                page.views = 0
                page.save()
                # probably better to use a redirect here.
                return category(request, category_name_slug)
        else:
            print form.errors
    else:
        form = PageForm()

    context_dict = {'form':form, 'category': cat}

    return render(request, 'rango/add_page.html', context_dict)
	
	
def add_category(request):
    if request.method == 'POST':
        form = CategoryForm(request.POST)
        if form.is_valid():
            #save the category to the db
            form.save(commit=True)
            
            #call the index view(), the user will be shown the homepage
            return index(request)
        else:
            print form.errors
    else:
        #If the request was not post, display the form to enter details
        form = CategoryForm()
    # Bad form (or form details), no form supplied...
    # Render the form with error messages (if any).
    return render(request, 'rango/add_category.html', {'form': form})
    
def category(request, category_name_slug):
    context_dict={}
    try:
        category=Category.objects.get(slug=category_name_slug)
        context_dict['name']=category.name
        context_dict['pages']=category.pages.all()
        context_dict['category']=category
        context_dict['slug']=category.slug
    except Category.DoesNotExist:
        pass
    return render(request, 'rango/category.html', context_dict)