from bs4 import BeautifulSoup
import lxml
import threading

#Nome: Hugo Shiniti Nishimoto
#RA: 32048416


def htmlreadimg():

  with open('sourcefile.html', 'r') as f:
  
      contents = f.read()
  
      soup = BeautifulSoup(contents, 'lxml')  
  
      all_imgs = soup.find_all('img', src=True)
  

      print(' Image(s):', '\n')
      for image in all_imgs:
            print(image['src'])
        
      

def htmlreadlink():

  with open('sourcefile.html', 'r') as f:
  
      contents = f.read()
  
      soup = BeautifulSoup(contents, 'lxml')  
  
      print('\n','Links(s):', '\n')
      for link in soup.find_all('link', href=True):
            print(link['href'])
     

def htmlreadscript():

  with open('sourcefile.html', 'r') as f:
  
      contents = f.read()
  
      soup = BeautifulSoup(contents, 'lxml')  
  
      print('\n','Script(s):', '\n')

      for script in soup.find_all('script', src=True):
            print(script['src'])
    
        
if __name__ =="__main__":
  
    t1 = threading.Thread(target=htmlreadimg, args=())
    t2 = threading.Thread(target=htmlreadlink, args=())
    t3 = threading.Thread(target=htmlreadscript, args=())

    t1.start()
    t2.start()
    t3.start()
 
    t1.join()
    t2.join()
    t3.join()
 


