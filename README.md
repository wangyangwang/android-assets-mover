# android-assets-mover

Note:
all path are hard coded, only applies to my file structure so i am building the new version with interface that allow you to choose directory that contains the original files and directory that you want to move the files into...

this is a tool i wrote for preparing mobile design assets ( android platform )
in android development, we usually have assets folders like 

  - drawable-xhdpi
  - drawable-xxhdpi
  - drawable-xxxhdpi
  - drawable-mdpi
  - drawable-hdpi
  
  ...
  
  when we export assets from Sketch, we usually have all of the images with different resolutions in one place. If we do it manually, we need to change the names of the files one by one and put them into the right folder.
  which is really time consuming. so I wrote this tool to help identity, rename and move files to the right place.
  
  v1:
  all variables are hard coded. 

v1.1:
    added filter for Spanish and Portuguese. files with ending "_Spanish" and "_Portuguese" will be automaically put into drawable-[resolution]-es or drawable-[resolution]-pt folder.
  
  coming:
  v2: 
  added interface for changing variables ( path and name of files.. )
