# <u>**Log-ger</u>**
 

This project is made using C++. In companies, many log files are generated within seconds. If someone wants to look up the logs for a particular period, they need to search by period. This is the tool that developers can use to extract the logs within a given period.

## <u>**Getting started**</u> 

To start using the project you have to follow the following steps:
## **Steps to follow**
1. Unzip the folder in your device.
   
2. Open the ```Command Prompt (cmd)```.
3. Change the directory to the location of the unzipped file in cmd.

<!-- 4. From C drive, go to the drive where the folder is unzipped.  -->
4. To change the drive use:
    ```
    C:\> cd /D <your_drive_name>:\
    ```

5. Using the command line, go to the unzipped folder location.
6. Copy and paste the command in cmd to start the project.
    ```
    g++ achieve.cpp -o LogExtractor.exe
    ```


7. Enter the command accodring to the given format:
    ```
    LogExtractor -f "From Time" -t "To Time" -i "Log file directory location"
    ```
8. As a result, you'll see what you're looking for.

> *Note : Make sure the logs are in ```IS0 8601``` format.

 **The project is up and running**

## <u>**FAQs**</u>

- **Can we run the program without the GNU compiler?**</br>
No, advised to have the GNU on your system.</br>
Minimum version required: gcc version 8.1.0


- **Do the log files have to be saved in the system?**
</br>
Yes, it's a must to have log files in the system.

<hr>













