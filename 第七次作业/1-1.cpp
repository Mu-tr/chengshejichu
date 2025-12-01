void Student::printPair(){
    if(pair==NULL) return;
    cout<<name<<":"<<(*pair).name<<"\n";
}
void Student::addPair(){
    if(pair!=NULL) return;
    if(welcome[0]->pair==NULL){
        if(welcome[0]->welcome[0]==this||welcome[0]->welcome[1]==this){
            pair=welcome[0];
            welcome[0]->pair=this;
            return;
        }
        if(welcome[0]->welcome[0]->pair!=NULL&&welcome[0]->welcome[1]->pair!=NULL){
            pair=welcome[0];
            welcome[0]->pair=this;
            return;
        }
    }
    if(welcome[1]->pair==NULL){
        if(welcome[1]->welcome[0]==this||welcome[1]->welcome[1]==this){
            pair=welcome[1];
            welcome[1]->pair=this;
            return;
        }
        if(welcome[1]->welcome[0]->pair!=NULL&&welcome[1]->welcome[1]->pair!=NULL){
            pair=welcome[1];
            welcome[1]->pair=this;
            return;
        }
    }
}