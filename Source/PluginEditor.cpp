/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
TutorialPluginAudioProcessorEditor::TutorialPluginAudioProcessorEditor (TutorialPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (500, 500);
    
    //parameters of slider object
    midiVolume.setSliderStyle(Slider::LinearBarVertical);
    midiVolume.setRange(0.0,127.0,1.0);
    midiVolume.setTextBoxStyle(Slider::NoTextBox, false, 90, 0);
    midiVolume.setPopupDisplayEnabled(true, false, this);
    midiVolume.setTextValueSuffix("Volume");
    midiVolume.setValue(1.0);
    
    //adds slider to editor
    addAndMakeVisible(&midiVolume);
    
    
}

TutorialPluginAudioProcessorEditor::~TutorialPluginAudioProcessorEditor()
{
}

//==============================================================================
void TutorialPluginAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::black);
    g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
    g.drawFittedText("Midi Volume", 0, 0, getWidth(), 30, Justification::centred, 1);
    

}

void TutorialPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    midiVolume.setBounds(40, 30, 20, getHeight()-60);
    
    
}
