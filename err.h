/*
    <c> Sharkbyteprojects
    https://github.com/Sharkbyteprojects
    Err Lib
    MIT-License

    REQUIREMENTS:
        #include <iostream>
        #include <string>
*/
void error(std::string errmessage){
    std::cerr << "\n\a" << "An Error Occured:\n\t" << errmessage << std::endl;
}