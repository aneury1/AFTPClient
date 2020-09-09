/*
  ___  ______ ___________  _____ _ _            _   
 / _ \ |  ___|_   _| ___ \/  __ \ (_)          | |  
/ /_\ \| |_    | | | |_/ /| /  \/ |_  ___ _ __ | |_ 
|  _  ||  _|   | | |  __/ | |   | | |/ _ \ '_ \| __|
| | | || |     | | | |    | \__/\ | |  __/ | | | |_ 
\_| |_/\_|     \_/ \_|     \____/_|_|\___|_| |_|\__|
                                                    
    author: Aneury Perez
    description: Simple FTP Client.
*/
#ifndef AFTPMAIN_H_DEFINED
#define AFTPMAIN_H_DEFINED

#include "aftp_constants.hxx"

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif


class AFTPMain: public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
};


wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(ID_Hello,   MyFrame::OnHello)
    EVT_MENU(wxID_EXIT,  MyFrame::OnExit)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
wxEND_EVENT_TABLE()




////FTP Main Declaration.
wxIMPLEMENT_APP(AFTPMain);

#endif