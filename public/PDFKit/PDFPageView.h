//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PDFKit/PDFPageLayerInterface-Protocol.h>
#import <PDFKit/UITextViewDelegate-Protocol.h>

@class NSString, PDFPageViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageView : UIView <UITextViewDelegate, PDFPageLayerInterface>
{
    PDFPageViewPrivate *_private;
}

- (void).cxx_destruct;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2 withButton:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3;
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3;
- (_Bool)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2;
- (void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3;
- (_Bool)_allowsFormFieldEntry;
- (void)_resetWidgetsForFields:(id)arg1 fieldsIncludedAreCleared:(_Bool)arg2;
- (void)_formChanged:(id)arg1;
- (void)buttonWidgetChanged:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textWidgetChangedTextView:(id)arg1;
- (void)textWidgetDidEndEditingTextField:(id)arg1;
- (void)textWidgetChangedTextField:(id)arg1;
- (void)textWidgetDidBeginEditingTextField:(id)arg1;
- (id)getPDFPageLayerEffectForAnnotation:(id)arg1;
- (void)_addPDFAnnotation:(id)arg1;
- (void)_addPDFAnnotationStampSignature:(id)arg1;
- (void)_addPDFAnnotationMarkup:(id)arg1;
- (void)_addPDFAnnotationButtonWidget:(id)arg1;
- (void)_choiceWidgetDone;
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_textWidgetDone;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (id)_scaleFont:(id)arg1 forString:(id)arg2 withBounds:(struct CGRect)arg3;
- (void)_addPDFAnnotationTextWidget:(id)arg1;
- (void)setupGestureRecognizersForPDFPageViewController:(id)arg1;
- (struct CGPoint)convertPointToPageView:(struct CGPoint)arg1;
- (struct CGRect)convertRectToPageView:(struct CGRect)arg1;
- (void)_setuppageAnnotationEffects;
- (void)updateBookmark;
- (void)removeBookmark;
- (void)addBookmark;
- (void)_setupBookmarkLayer;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGImage *)_createTextMagnifierContentsImageAtPagePoint:(struct CGPoint)arg1 forLoupeType:(int)arg2 forSize:(struct CGSize)arg3;
- (void)_updateMagnificationLoupeLayer:(int)arg1 withPagePoint:(struct CGPoint)arg2;
- (id)_createMagnificationLoupeLayer:(int)arg1;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearLollipopMagnifier;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearTextSelectionMagnifier;
- (void)setAnnotation:(id)arg1 isSelected:(_Bool)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)updateAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)colorWidgetBackgrounds:(_Bool)arg1;
- (void)removeWidgetAnnotation:(id)arg1;
- (void)addWidgetAnnotation:(id)arg1;
- (void)hideTileLayer:(_Bool)arg1;
- (void)previewRotatePage:(double)arg1;
- (void)addSearchSelection:(id)arg1;
- (void)setSearchSelection:(id)arg1;
- (void)setEnableSelectionDrawing:(_Bool)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;
- (int)backgroundImageQuality;
- (id)backgroundImage;
- (_Bool)hasBackgroundImage;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (id)pageLayer;
- (id)page;
- (unsigned long long)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)clearTiles;
- (void)forceTileUpdate;
- (_Bool)enablesTileUpdates;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (void)updatePageLayerEffect:(id)arg1;
- (id)pageLayerEffects;
- (void)removePageLayerEffectByUUID:(id)arg1;
- (void)removePageLayerEffect:(id)arg1;
- (id)getPageLayerEffectByUUID:(id)arg1;
- (id)addPageLayerEffect:(id)arg1;
- (_Bool)isVisible;
- (long long)displayBox;
- (void)setNeedsTilesUpdate;
- (void)dealloc;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

