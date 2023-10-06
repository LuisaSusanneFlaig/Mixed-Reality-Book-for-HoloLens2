using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProgressBar : MonoBehaviour
{
    [SerializeField] float targetProgress;
    [SerializeField] GameObject progressBar;
    [SerializeField] float interpolationSpeed = 0.5f;

    private float interpProgress;
    void Start()
    {
        // Setze die Skalierung der ProgressBar auf den Ziel-Fortschritt
        progressBar.transform.localScale = new Vector3(targetProgress, 1, 1);
        // Setze den interpolierten Fortschritt auf den Ziel-Fortschritt
        interpProgress = targetProgress;
    }

    // FixedUpdate wird in regelmäßigen Abständen aufgerufen und wird für die Animation der ProgressBar verwendet
    void FixedUpdate()
    {
        // Interpoliere den Fortschritt mit der angegebenen Geschwindigkeit
        interpProgress = interpProgress * (1 - interpolationSpeed) + targetProgress * interpolationSpeed;
        // Setze die Skalierung der ProgressBar entsprechend dem interpolierten Fortschritt
        progressBar.transform.localScale = new Vector3(interpProgress, 1, 1);
    }
    // Diese Methode wird aufgerufen, um den Fortschritt der ProgressBar zu aktualisieren
    public void SetProgress(float progressToSet)
    {


        targetProgress = progressToSet; // Setze den Ziel-Fortschritt auf den übergebenen Wert
       
    }
}
