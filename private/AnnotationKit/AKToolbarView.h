//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AnnotationKit/AKAttributePickerViewControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignatureCreationControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignaturesViewControllerDelegate-Protocol.h>
#import <AnnotationKit/AKToolsListViewControllerDelegate-Protocol.h>
#import <AnnotationKit/PKInlineColorPickerDelegate-Protocol.h>
#import <AnnotationKit/PKInlineInkPickerDelegate-Protocol.h>
#import <AnnotationKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AKAttributePickerViewController, AKController, AKSignaturesViewController_iOS, AKTextAttributesViewController, AKToolbarBackgroundView, AKToolsListViewController, NSLayoutConstraint, NSString, PKInlineColorPicker, PKInlineInkPicker, UIAlertController, UIBarButtonItem, UIToolbar;

@interface AKToolbarView : UIView <PKInlineInkPickerDelegate, PKInlineColorPickerDelegate, AKToolsListViewControllerDelegate, AKAttributePickerViewControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIToolbar *_toolbar;
    PKInlineInkPicker *_pencilTools;
    PKInlineColorPicker *_compactColorPicker;
    AKToolbarBackgroundView *_backgroundView;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_shapesPickerButton;
    UIBarButtonItem *_attributesPickerButton;
    UIBarButtonItem *_currentColorButton;
    UIBarButtonItem *_undoRedoFixedSpace;
    UIBarButtonItem *_attributesAddShapeFixedSpace;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSLayoutConstraint *_pencilToolsBottomConstraint;
    NSLayoutConstraint *_pencilToolsWidthConstraint;
    NSLayoutConstraint *_colorPickerBottomConstraint;
    NSLayoutConstraint *_colorPickerWidthConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKToolsListViewController *_toolsListViewController;
    AKAttributePickerViewController *_attributePickerViewController;
    _Bool _showAttributePicker;
    _Bool _expandCompactColorPicker;
    _Bool _undoRedoButtonsHidden;
    _Bool _alwaysShowUndoButton;
    _Bool _shareButtonHidden;
    _Bool _translucent;
    _Bool _useThickInks;
    AKController *_annotationController;
}

+ (id)redoButtonImage;
+ (id)undoButtonImage;
@property(nonatomic) _Bool useThickInks; // @synthesize useThickInks=_useThickInks;
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
@property(nonatomic, getter=isShareButtonHidden) _Bool shareButtonHidden; // @synthesize shareButtonHidden=_shareButtonHidden;
@property(nonatomic) _Bool alwaysShowUndoButton; // @synthesize alwaysShowUndoButton=_alwaysShowUndoButton;
@property(nonatomic) _Bool undoRedoButtonsHidden; // @synthesize undoRedoButtonsHidden=_undoRedoButtonsHidden;
@property(nonatomic) __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
- (void).cxx_destruct;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)_inkPicker:(id)arg1 didPickColor:(id)arg2;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(_Bool)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)dismissPresentedPopovers;
- (id)presentedViewController;
- (id)popoverPresentingController;
- (_Bool)isPresentingPopover;
- (_Bool)isPresentingPopovers;
@property(nonatomic) id shareButtonTarget;
@property(nonatomic) SEL shareButtonAction;
- (void)_showColorPicker:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_showTextAttributes:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_redo:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_undoAll:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (void)revalidateItems;
- (void)upateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (id)createUndoViewController;
- (void)resetToLastDrawingTool;
- (_Bool)shouldUseCompactHeight;
- (_Bool)shouldUseCompactWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)layoutForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

