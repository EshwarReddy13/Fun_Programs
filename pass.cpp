cannotOpen(maxRow,maxCol,player);

    //Testing loadLevel
    testLoadlevel("loadlevel1.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel2.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel3.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel4.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel5.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel6.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel7.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel8.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel9.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel10.txt",maxRow,maxCol,player);
    testLoadlevel("loadlevel11.txt",maxRow,maxCol,player);

    //Testing getDirection
    testGetdirection('w', 1, 2)

    void cannotOpen(int maxRow,int maxCol,Player player){
    loadLevel("HAHAHA.txt", maxRow, maxCol,player);
}
void testLoadlevel(const std::string& fileName,int& maxRow,int& maxCol,Player& player){
    loadLevel(fileName, maxRow, maxCol,player);
}
void testGetdirection(char& input,int& nextRow,int& nextCol){
    getDirection(input,nextRow,nextCol);   
}