using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor.UIElements;
using UnityEngine;

public class BookControl : MonoBehaviour
{
  
  
    [SerializeField] GameObject book;
    [SerializeField] GameObject bookTitel;
    [SerializeField] GameObject tableOfContent;
    [SerializeField] GameObject chapterObject;
    [SerializeField] GameObject previousButton;
    [SerializeField] GameObject nextButton;
    [SerializeField] GameObject startButton;
    [SerializeField] GameObject progressBarObject;
    [SerializeField] GameObject onboarding;
    [SerializeField] GameObject cover;
    [SerializeField] GameObject pageObject;
    [SerializeField] TMP_Text chapterText;
    [SerializeField] TMP_Text text1;
    [SerializeField] TMP_Text text2;
    [SerializeField] TMP_Text text3;
    [SerializeField] TMP_Text text4;
    [SerializeField] TMP_Text text5;
    [SerializeField] TMP_Text text6;
    [SerializeField] TMP_Text text7;
    [SerializeField] TMP_Text text8;
    [SerializeField] TMP_Text text9;
    [SerializeField] TMP_Text text10;
    [SerializeField] TMP_Text text11;
    [SerializeField] TMP_Text text12;
    [SerializeField] TMP_Text text13;
    [SerializeField] GameObject Anim1;
    [SerializeField] GameObject Anim2;
    [SerializeField] GameObject Anim3;
    [SerializeField] GameObject Anim4;
    [SerializeField] GameObject Anim5;
    [SerializeField] GameObject Anim6;
    [SerializeField] GameObject Anim7;
    [SerializeField] GameObject Anim8;
    [SerializeField] GameObject Anim9;
    [SerializeField] GameObject Anim10;
    public AudioSource audioSourceChapter8;
    public AudioSource audioSourceChapter9;
    public Material material1;
    public Material material2;
    ProgressBar progressBar;
    private int pageContents;
    private int page = -1;
    

    void Start()
    {
       // UI-Komponenten, die beim Start nicht angezeigt werden sollen, werden unsichtbar gemacht
        previousButton.SetActive(false);
        chapterObject.SetActive(true);
        pageObject.SetActive(false);
        book.SetActive(false);
        tableOfContent.SetActive(false);
      
        onboarding.SetActive(false);        
        Anim1.SetActive(false);
        Anim2.SetActive(false);
        Anim3.SetActive(false);
        Anim4.SetActive(false);
        Anim5.SetActive(false);
        Anim6.SetActive(false);
        Anim7.SetActive(false);
        Anim8.SetActive(false);
        Anim9.SetActive(false);
        Anim10.SetActive(false);

        // Methode wird automatisch nach 2.5 Sekunden aufgerufen
        Invoke("StartOnboarding", 2.5f);
        // Objekt der progressbar wird referenziert
        progressBar = progressBarObject.GetComponent<ProgressBar>();
        // Die Texte des Kapitels werden auf 14 erhöht
        pageContents = 14;




    }
    
    public void StartOnboarding()
    {
        // Cover wird ausgeblendet und Begrüßungstext wird angezeigt
        cover.SetActive(false);
        onboarding.SetActive(true);
    }

    public void StartReading()
    {
        // Cover wird ausgeblendet und Kapitelübersicht angezeigt
        bookTitel.SetActive(false);
        tableOfContent.SetActive(true);
        book.SetActive(false);
        

    }

    public void ChoseChapter()
    {
        // Buchinhalt wird angezeigt
        book.SetActive(true);
        progressBarObject.SetActive(false);
        // Der Wert des Fortschrittsbalkes wird auf den Anfangswert gesetzt
        progressBar.SetProgress(0);
        // Der Soundtrack des achten Kapitels wird abgespielt
        audioSourceChapter8.Play();

    }


    public void NextPage()
    {
        // Die Funktion ermöglicht das Vorwärtsblättern im Buchinhalt
        if (page < pageContents - 1)
        {
            page++;
            ChangePageContent();
            chapterObject.SetActive(false);
            progressBarObject.SetActive(true);
            pageObject.SetActive(true);


        }
        else if (page == pageContents - 1)
        {
            
            nextButton.SetActive(false);
            chapterObject.SetActive(true);
            chapterObject.GetComponent<MeshRenderer>().material = material2;
            chapterText.text = "9. Kapitel: Die Abreise des kleinen Prinzen";
            progressBarObject.SetActive(false);
            pageObject.SetActive(false);
            audioSourceChapter8.Stop();
            audioSourceChapter9.Play();
            Anim1.SetActive(false);
            Anim2.SetActive(false);
            Anim3.SetActive(false);
            Anim4.SetActive(false);
            Anim5.SetActive(false);
            Anim6.SetActive(false);
            Anim7.SetActive(false);
            Anim8.SetActive(false);
            Anim9.SetActive(false);
            Anim10.SetActive(false);


        }
        previousButton.SetActive(true);
       
 
    }

    public void PreviousPage()
    {
        // Die Funktion ermöglicht das zurückblättern im Buchinhalt 
        if (page > 0)
        {
            page--;
            ChangePageContent();
            chapterObject.SetActive(false);
            pageObject.SetActive(true);
            progressBarObject.SetActive(true);
            if (audioSourceChapter9.isPlaying)
            {
                audioSourceChapter9.Stop();
                audioSourceChapter8.Play();
            }
          
            
        }
        else if (page == 0)
        {
            
            previousButton.SetActive(false);
            chapterObject.SetActive(true);
            chapterText.text = "8. Kapitel: Der kleine Prinz und seine Blume";
            chapterObject.GetComponent<MeshRenderer>().material = material1;
            progressBarObject.SetActive(false);
            pageObject.SetActive(false);
            Anim1.SetActive(false);
            Anim2.SetActive(false);
            Anim3.SetActive(false);
            Anim4.SetActive(false);
            Anim5.SetActive(false);
            Anim6.SetActive(false);
            Anim7.SetActive(false);
            Anim8.SetActive(false);
            Anim9.SetActive(false);
            Anim10.SetActive(false);
        }
        nextButton.SetActive(true);

    }

    public void ChangePageContent()
    {
        // Die Funktion ändert den Buchinhalt indem sie andere Funktionen aufruft
        progressBar.SetProgress((float)page / (pageContents - 1));
        AnimationHandler(page);
        TextHandler(page);

        
    }



    public void TextHandler(int mypage)
    {
        // Die Funktion ändert den Text der Buchseite
        mypage = mypage + 1;

        switch (mypage)
        {
            case 1:
                text1.gameObject.SetActive(true);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
 
                
                break;

            case 2:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(true);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
   
                
                break;

            case 3:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(true);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
          
                
                break;

            case 4:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(true);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
       
                
                break;

            case 5:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(true);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
                
                
                break;

            case 6:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(true);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
                
                
                break;

            case 7:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(true);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
                
                
                break;

            case 8:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(true);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
               
               
                break;

            case 9:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(true);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
                
                
                break;

            case 10:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(true);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
               
                
                break;

            case 11:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(true);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(false);
             
                
                break;

            case 12:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(true);
                text13.gameObject.SetActive(false);
             
                
                break;

            case 13:
                text1.gameObject.SetActive(false);
                text2.gameObject.SetActive(false);
                text3.gameObject.SetActive(false);
                text4.gameObject.SetActive(false);
                text5.gameObject.SetActive(false);
                text6.gameObject.SetActive(false);
                text7.gameObject.SetActive(false);
                text8.gameObject.SetActive(false);
                text9.gameObject.SetActive(false);
                text10.gameObject.SetActive(false);
                text11.gameObject.SetActive(false);
                text12.gameObject.SetActive(false);
                text13.gameObject.SetActive(true);
              
                
                break;

         

      

        }
    }
 


    public void AnimationHandler(int mypage)
    {
        // Die Animation ändert die Animation der Buchseite
        Debug.Log("works"+mypage);
        mypage=mypage + 1;
        

        switch (mypage)

        {



            case 1:
                Anim1.SetActive(true);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 2:
                Anim1.SetActive(false);
                Anim2.SetActive(true);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 3:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(true);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 4:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(true);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 5:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(true);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 6:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(true);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 7:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(true);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 8:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(true);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 9:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(true);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 10:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(true);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);

                break;
            case 11:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(true);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(false);
                break;
            case 12:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(true);
                Anim10.SetActive(false);

                break;
            case 13:
                Anim1.SetActive(false);
                Anim2.SetActive(false);
                Anim3.SetActive(false);
                Anim4.SetActive(false);
                Anim5.SetActive(false);
                Anim6.SetActive(false);
                Anim7.SetActive(false);
                Anim8.SetActive(false);
                Anim9.SetActive(false);
                Anim10.SetActive(true);

                break;


   
        }





    }
}

