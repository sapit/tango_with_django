from django.shortcuts import render
from django.http import HttpResponse
from models import Category, Page

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

def category(request, category_name_slug):
    context_dict={}
    try:
        category=Category.objects.get(slug=category_name_slug)
        context_dict['name']=category.name
        context_dict['pages']=category.pages.all()
        context_dict['category']=category
    except Category.DoesNotExist:
        pass
    return render(request, 'rango/category.html', context_dict)