//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIContentSizeCategoryAdjusting-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIKeyInputPrivate-Protocol.h>
#import <UIKit/UIKeyboardInput-Protocol.h>
#import <UIKit/UIPopoverControllerDelegate-Protocol.h>
#import <UIKit/UITextDragSupporting-Protocol.h>
#import <UIKit/UITextDraggable-Protocol.h>
#import <UIKit/UITextDropSupporting-Protocol.h>
#import <UIKit/UITextDroppable-Protocol.h>
#import <UIKit/UITextFieldContent-Protocol.h>
#import <UIKit/UITextInput-Protocol.h>
#import <UIKit/UITextInputTraits_Private-Protocol.h>
#import <UIKit/UITextPasteConfigurationSupporting-Protocol.h>
#import <UIKit/UITextPasteConfigurationSupporting_Internal-Protocol.h>
#import <UIKit/UIViewGhostedRangeSupporting-Protocol.h>
#import <UIKit/_UIFloatingContentViewDelegate-Protocol.h>
#import <UIKit/_UILayoutBaselineUpdating-Protocol.h>
#import <UIKit/_UITextFieldContent_Internal-Protocol.h>
#import <UIKit/_UITextFieldVisualStyleSubject-Protocol.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSArray, NSAttributedString, NSDictionary, NSIndexSet, NSLayoutConstraint, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIButton, UIColor, UIDragInteraction, UIDropInteraction, UIFieldEditor, UIFont, UIImage, UIImageView, UIInputContextHistory, UILabel, UIPasteConfiguration, UISystemInputViewController, UITapGestureRecognizer, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPasteController, UITextPosition, UITextRange, UIView, UIVisualEffectView, _UIBaselineLayoutStrut, _UICascadingTextStorage, _UIDetachedFieldEditorBackgroundView, _UIFloatingContentView, _UIFullFontSize, _UITextFieldContentView, _UITextFieldVisualStyle;
@protocol UITextDragDelegate, UITextDragDropSupport, UITextDropDelegate, UITextFieldDelegate, UITextInputDelegate, UITextInputTokenizer, UITextPasteDelegate;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, UIKeyInputPrivate, _UITextFieldVisualStyleSubject, UIViewGhostedRangeSupporting, UITextInputTraits_Private, _UITextFieldContent_Internal, UIPopoverControllerDelegate, UITextDragSupporting, UITextDropSupporting, UITextPasteConfigurationSupporting_Internal, UITextFieldContent, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, NSCoding, UIContentSizeCategoryAdjusting>
{
    _UICascadingTextStorage *_prewarmedTextStorage;
    long long _borderStyle;
    double _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    long long _clearButtonMode;
    UIView *_leftView;
    long long _leftViewMode;
    UIView *_rightView;
    long long _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    _UIFullFontSize *_fullFontSize;
    struct UIEdgeInsets _padding;
    float _progress;
    UIButton *_clearButton;
    struct CGSize _clearButtonOffset;
    struct CGSize _leftViewOffset;
    struct CGSize _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    _UITextFieldContentView *_textContentView;
    _UIFloatingContentView *_floatingContentView;
    UIVisualEffectView *_contentBackdropView;
    _UIDetachedFieldEditorBackgroundView *_fieldEditorBackgroundView;
    UIVisualEffectView *_fieldEditorEffectView;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    double _labelOffset;
    NSAttributedString *_overriddenPlaceholder;
    long long _overriddenPlaceholderAlignment;
    UITextInteractionAssistant *_interactionAssistant;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIFieldEditor *_fieldEditor;
    UITextPasteController *_pasteController;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UIView *_recentsAccessoryView;
    UISystemInputViewController *_systemInputViewController;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    id <UITextDragDropSupport> _textDragDropSupport;
    struct {
        unsigned int verticallyCenterText:1;
        unsigned int isAnimating:4;
        unsigned int inactiveHasDimAppearance:1;
        unsigned int becomesFirstResponderOnClearButtonTap:1;
        unsigned int clearsPlaceholderOnBeginEditing:1;
        unsigned int adjustsFontSizeToFitWidth:1;
        unsigned int fieldEditorAttached:1;
        unsigned int canBecomeFirstResponder:1;
        unsigned int shouldSuppressShouldBeginEditing:1;
        unsigned int inResignFirstResponder:1;
        unsigned int undoDisabled:1;
        unsigned int explicitAlignment:1;
        unsigned int implementsCustomDrawing:1;
        unsigned int needsClearing:1;
        unsigned int suppressContentChangedNotification:1;
        unsigned int allowsEditingTextAttributes:1;
        unsigned int usesAttributedText:1;
        unsigned int backgroundViewState:2;
        unsigned int clearingBehavior:2;
        unsigned int overridePasscodeStyle:1;
        unsigned int shouldResignWithoutUpdate:1;
        unsigned int blurEnabled:1;
        unsigned int disableFocus:1;
        unsigned int disableRemoteTextEditing:1;
        unsigned int prewarmedTextStorageReady:1;
        unsigned int allowsAttachments:1;
    } _textFieldFlags;
    _Bool _deferringBecomeFirstResponder;
    _Bool _animateNextHighlightChange;
    CUICatalog *_cuiCatalog;
    CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
    double _roundedRectBackgroundCornerRadius;
    NSArray *_overriddenAttributesForEditing;
    _Bool _adjustsFontForContentSizeCategory;
    _Bool _tvUseVibrancy;
    _Bool _disableTextColorUpdateOnTraitCollectionChange;
    id <UITextPasteDelegate> _pasteDelegate;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    UIColor *_tvCustomTextColor;
    UIColor *_tvCustomFocusedTextColor;
    long long _textDragOptions;
    id <UITextDragDelegate> _textDragDelegate;
    id <UITextDropDelegate> _textDropDelegate;
    _UITextFieldVisualStyle *_visualStyle;
}

+ (_Bool)_isCompatibilityTextField;
@property(retain, nonatomic) _UITextFieldVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic) __weak id <UITextDropDelegate> textDropDelegate; // @synthesize textDropDelegate=_textDropDelegate;
@property(nonatomic) __weak id <UITextDragDelegate> textDragDelegate; // @synthesize textDragDelegate=_textDragDelegate;
@property(nonatomic) long long textDragOptions; // @synthesize textDragOptions=_textDragOptions;
@property(retain) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(retain, nonatomic) UIImage *disabledBackground; // @synthesize disabledBackground=_disabledBackground;
@property(retain, nonatomic) UIImage *background; // @synthesize background=_background;
@property(nonatomic) __weak id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property(nonatomic) _Bool _disableTextColorUpdateOnTraitCollectionChange; // @synthesize _disableTextColorUpdateOnTraitCollectionChange;
@property(retain, nonatomic) UIColor *_tvCustomFocusedTextColor; // @synthesize _tvCustomFocusedTextColor;
@property(retain, nonatomic) UIColor *_tvCustomTextColor; // @synthesize _tvCustomTextColor;
@property(nonatomic) _Bool _tvUseVibrancy; // @synthesize _tvUseVibrancy;
@property(retain, nonatomic, setter=_setBaselineLayoutLabel:) _UIBaselineLayoutStrut *_baselineLayoutLabel; // @synthesize _baselineLayoutLabel;
@property(retain, nonatomic, setter=_setBaselineLayoutConstraint:) NSLayoutConstraint *_baselineLayoutConstraint; // @synthesize _baselineLayoutConstraint;
@property(nonatomic) __weak id <UITextPasteDelegate> pasteDelegate; // @synthesize pasteDelegate=_pasteDelegate;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (_Bool)_isFocused;
- (long long)_userInterfaceStyle;
- (long long)_keyboardAppearance;
- (void)willMoveToWindow:(id)arg1;
- (void)_createInteractionAssistant;
- (void)_disableClipToBoundsForBorderStyleNone;
- (id)_effectiveContentView;
- (id)_floatingContentView;
- (void)_addTextContentView;
- (void)_initContentView;
- (void)_initPrewarmedTextStorage;
- (void)_pasteSessionDidFinish;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 animator:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) struct CGPoint contentOffsetForSameViewDrops;
- (void)resignDropResponder;
- (void)becomeDropResponder;
- (_Bool)allowsDraggingAttachments;
- (void)performCancelAnimations;
- (void)didGenerateCancelPreview:(id)arg1;
- (id)willGenerateCancelPreview;
- (void)draggingFinished;
- (void)draggingStarted;
@property(readonly, nonatomic, getter=isTextDropActive) _Bool textDropActive;
@property(readonly, nonatomic, getter=isTextDragActive) _Bool textDragActive;
@property(readonly, nonatomic) UIDropInteraction *textDropInteraction;
@property(readonly, nonatomic) UIDragInteraction *textDragInteraction;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(id)arg1;
- (void)_updateSelectionGestures;
- (long long)_blurEffectStyle;
- (void)_tvUpdateContentBackdropView;
- (id)_systemInputViewController;
- (id)_contentBackdropView;
- (void)_updateLabelAppearance;
- (void)_tvUpdateTextColor;
- (_Bool)_shouldDetermineInterfaceStyleTextColor;
- (long long)_blurEffectStyleForAppearance;
- (void)_applyRoundedRectBackgroundCornerRadiusToBackgroundViewWithWarning:(_Bool)arg1;
- (double)_roundedRectBackgroundCornerRadius;
- (void)_setRoundedRectBackgroundCornerRadius:(double)arg1;
- (id)_backgroundView;
- (id)_textContentView;
- (id)_systemBackgroundView;
- (void)setContinuousSpellCheckingEnabled:(_Bool)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)deleteBackward;
- (struct _NSRange)insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)_setOverridePlaceholder:(id)arg1 alignment:(long long)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)metadataDictionariesForDictationResults;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)_textInputViewForAddingGestureRecognizers;
@property(readonly, nonatomic) UIView *textInputView;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (id)_inputController;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)_inPopover;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)pasteItemProviders:(id)arg1;
- (id)_implicitPasteConfigurationClasses;
- (id)_effectivePasteConfiguration;
- (void)paste:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_selectionMayChange:(id)arg1;
- (_Bool)_isDisplayingLookupViewController;
- (_Bool)_isDisplayingShareViewController;
- (_Bool)_isDisplayingReferenceLibraryViewController;
- (_Bool)_isDisplayingShortcutViewController;
- (void)_share:(id)arg1;
- (void)_define:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)_proxyTextInput;
- (void)layoutTilesNow;
- (id)webView;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (struct CGRect)_selectionClipRect;
- (_Bool)_tvHasFloatingFieldEditor;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (_Bool)_restoreFirstResponder;
- (id)interactionAssistant;
- (id)selectionView;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (_Bool)hasSelection;
- (id)_fieldEditor;
- (id)_fieldEditorIfAttached;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (_Bool)_useGesturesForEditableContent;
- (_Bool)isEditable;
- (id)_uiktest_tvCustomTextColor;
- (id)_uiktest_placeholderLabelColor;
- (_Bool)_uiktest_tvUseVibrancy;
- (_Bool)_uiktest_shouldDisableTextColorUpdateOnTraitCollectionChange;
- (id)_textStorageTextColor;
- (_Bool)_textShouldFillFieldEditorHeight;
- (double)_fieldEditorHeight;
- (_Bool)_inVibrantContentView;
- (_Bool)_hasFloatingFieldEditor;
- (id)_currentTextColor;
- (_Bool)_textShouldUseVibrancy;
- (struct CGPoint)_originForTextFieldLabel:(id)arg1;
- (id)undoManager;
- (int)atomStyle;
- (void)setAtomStyle:(int)arg1;
- (_Bool)drawsAsAtom;
- (void)setDrawsAsAtom:(_Bool)arg1;
- (void)setClearButtonOffset:(struct CGSize)arg1;
- (void)_clearButtonClicked:(id)arg1;
- (_Bool)isUndoEnabled;
- (void)setUndoEnabled:(_Bool)arg1;
- (void)setTextCentersVertically:(_Bool)arg1;
- (void)setTextCentersHorizontally:(_Bool)arg1;
- (void)setLabel:(id)arg1;
- (id)textLabel;
- (void)setLabelOffset:(float)arg1;
- (_Bool)hasMarkedText;
- (void)setProgress:(float)arg1;
- (struct CGRect)iconRect;
- (void)setBecomesFirstResponderOnClearButtonTap:(_Bool)arg1;
- (struct CGSize)clearButtonOffset;
- (void)setIcon:(id)arg1;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint)arg1;
- (void)setSelectionRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setBlurEnabled:(_Bool)arg1;
- (_Bool)_blurEnabled;
- (void)_forceObscureAllText;
- (id)_tvTypingAttributes;
- (void)clearText;
- (void)_resetSelectionUI;
- (void)_clearSelectionUI;
- (void)selectAll;
- (void)_applyHighlightedAnimated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInactiveHasDimAppearance:(_Bool)arg1;
- (float)paddingRight;
- (void)setPaddingRight:(float)arg1;
- (float)paddingBottom;
- (void)setPaddingBottom:(float)arg1;
- (float)paddingTop;
- (void)setPaddingTop:(float)arg1;
- (float)paddingLeft;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (_Bool)_implementsCustomDrawing;
- (struct CGRect)editRect;
- (struct CGRect)textRect;
- (struct CGRect)clearButtonRect;
- (void)setClearButtonStyle:(int)arg1;
- (void)setTextAutorresizesToFit:(_Bool)arg1;
- (void)setAutoresizesTextToFit:(_Bool)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)_dictationInterpretations;
- (id)supportedPasteboardTypesForCurrentSelection;
- (_Bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (struct _NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (id)customOverlayContainer;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)_applicationResuming:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_invalidateAfterUpdatingEditingAttributes;
- (void)_didUpdateAfterDetachingFieldEditor;
- (void)_willUpdateAfterDetachingFieldEditor;
- (void)_didAttachFieldEditor;
- (void)_willAttachFieldEditor;
- (void)_addFieldEditorToView;
- (id)_defaultPromptString;
- (void)_detachFieldEditor;
- (void)_attachFieldEditor;
@property(nonatomic) int textSelectionBehavior;
- (void)_drawTextInRect:(struct CGRect)arg1 forLabel:(id)arg2;
- (void)drawPrefixInRect:(struct CGRect)arg1;
- (void)drawSuffixInRect:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (_Bool)_hasSuffixField;
- (_Bool)_ownsInputAccessoryView;
@property(retain) UIView *recentsAccessoryView;
@property(retain) UIView *inputAccessoryView;
- (void)_setActualRightViewMode:(long long)arg1;
- (void)_setActualRightView:(id)arg1;
@property(nonatomic) long long rightViewMode; // @synthesize rightViewMode=_rightViewMode;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
- (void)_setActualLeftViewMode:(long long)arg1;
- (void)_setActualLeftView:(id)arg1;
@property(nonatomic) long long leftViewMode; // @synthesize leftViewMode=_leftViewMode;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSDictionary *typingAttributes;
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(_Bool)arg2;
@property(nonatomic) _Bool allowsEditingTextAttributes;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)setClearsPlaceholderOnBeginEditing:(_Bool)arg1;
- (_Bool)clearsPlaceholderOnBeginEditing;
@property(nonatomic) _Bool clearsOnBeginEditing;
- (void)_setPrefix:(id)arg1;
- (void)_updateSuffix:(id)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (long long)_suffixLabelTextAlignment;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (void)_setAttributedPlaceholder:(id)arg1;
@property(copy, nonatomic) NSString *placeholder;
- (void)_setPlaceholder:(id)arg1;
- (void)createPlaceholderIfNecessary;
- (void)finishedSettingPlaceholder;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_createBaselineLayoutLabelIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2;
- (Class)_placeholderLabelClass;
- (void)setContentVerticalAlignment:(long long)arg1;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes;
@property(nonatomic) long long textAlignment;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (void)setClipsToBounds:(_Bool)arg1;
@property(retain, nonatomic) UIFont *font;
- (void)disableClearsOnInsertion;
- (int)clearingBehavior;
- (void)setClearingBehavior:(int)arg1;
@property(nonatomic) _Bool clearsOnInsertion;
- (double)shadowBlur;
- (void)setShadowBlur:(double)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (void)interactionTintColorDidChange;
@property(retain, nonatomic) UIColor *textColor;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (void)_updateAtomTextColor;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;
- (void)_sanitizeText:(id)arg1;
- (void)sanitizeAttributedText:(id)arg1;
- (_Bool)_textNeedsSanitizing:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(_Bool)arg2;
@property(copy, nonatomic) NSString *text;
- (void)finishedSettingTextOrAttributedText;
- (id)searchText;
- (_Bool)_hasContent;
- (id)_attributedText;
- (id)_text;
@property(nonatomic) _Bool allowsAttachments;
@property(nonatomic) long long nonEditingLinebreakMode;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (_Bool)_shouldObscureInput;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText; // @dynamic displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText; // @dynamic displaySecureTextUsingPlainText;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
- (id)_secureString:(id)arg1;
- (void)_updateForTintColor;
- (void)tintColorDidChange;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (id)_contentSnapshot;
- (id)_placeholderLabel;
- (id)_placeholderView;
- (id)_placeholderColor;
- (void)_setSystemBackgroundViewActive:(_Bool)arg1;
- (_Bool)_fieldEditorAttached;
- (Class)_systemBackgroundViewClass;
- (void)_setRightViewOffset:(struct CGSize)arg1;
- (struct CGSize)_rightViewOffset;
- (void)_setLeftViewOffset:(struct CGSize)arg1;
- (struct CGSize)_leftViewOffset;
- (struct CGPoint)_scrollOffset;
- (id)actualFont;
- (double)actualMinimumFontSize;
- (struct CGRect)adjustedCaretRectForCaretRect:(struct CGRect)arg1;
- (void)_updateFieldEditorBackgroundViewLayout:(_Bool)arg1;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(_Bool)arg1;
- (_Bool)_shouldEndEditing;
- (void)layoutSubviews;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)_layoutContent;
- (void)_layoutLabels;
- (struct CGRect)_prefixFrame;
- (struct CGRect)_suffixFrame;
- (void)_updateBaselineInformationDependentOnBounds;
- (_Bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect)arg1;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect)arg1;
- (void)_updateLabel;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (_Bool)_isShowingPrefix;
- (_Bool)_isShowingPlaceholder;
- (_Bool)_showsRightView;
- (_Bool)_showsLeftView;
- (_Bool)_showsClearButtonWhenEmpty;
- (_Bool)_showsClearButton:(_Bool)arg1;
- (_Bool)_showsClearButtonWhenNonEmpty:(_Bool)arg1;
- (void)_updateAtomBackground;
- (_Bool)_showsAtomBackground;
- (_Bool)_partsShouldBeMini;
- (_Bool)_heightShouldBeMini;
- (struct CGRect)_atomBackgroundViewFrame;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateButtons;
- (id)_clearButton;
- (id)clearButton;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (float)_marginTopForBounds:(struct CGRect)arg1;
- (float)_marginTop;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (float)_newFontSize:(float)arg1 maxSize:(float)arg2;
- (void)setFont:(id)arg1 fullFontSize:(id)arg2 ambientOnly:(_Bool)arg3;
- (void)setFont:(id)arg1 fullFontSize:(id)arg2;
- (double)_fullFontSize;
- (void)_setFullFontSize:(id)arg1;
- (void)_invalidateDefaultFullFontSize;
- (id)automaticallySelectedOverlay;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resignFirstResponder;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (_Bool)_finishResignFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_nonDestructivelyResignFirstResponder;
- (void)_becomeFirstResponder;
- (void)_updatePlaceholderPosition;
- (long long)_currentTextAlignment;
- (void)__resumeBecomeFirstResponder;
- (void)_initialScrollDidFinish:(id)arg1;
- (void)_activateSelectionView;
- (void)_stopObservingFieldEditorScroll;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)_setForegroundViewsAlpha:(double)arg1;
- (void)_setDisableFocus:(_Bool)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_selectGestureChanged:(id)arg1;
- (void)_uninstallSelectGestureRecognizer;
- (void)_installSelectGestureRecognizer;
- (_Bool)becomeFirstResponder;
- (void)scrollTextFieldToVisible;
- (_Bool)_requiresKeyboardResetOnReload;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
- (struct CGSize)_textSize;
- (struct CGSize)_textSizeUsingFullFontSize:(_Bool)arg1;
- (void)setAnimating:(_Bool)arg1;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_sizeChanged:(_Bool)arg1;
- (void)_setNeedsStyleRecalc;
- (void)dealloc;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_encodableSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (void)_propagateCuiProperties;
- (id)_cuiStyleEffectConfiguration;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (id)_cuiCatalog;
- (void)_setCuiCatalog:(id)arg1;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)isAccessibilityElementByDefault;
- (void)_setPasscodeStyleAlpha:(double)arg1;
- (double)_passcodeStyleAlpha;
- (void)_updateForPasscodeAppearance;
- (_Bool)_overridePasscodeStyle;
- (void)_setOverridePasscodeStyle:(_Bool)arg1;
- (_Bool)_isPasscodeStyle;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder; // @dynamic deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UIPasteConfiguration *pasteConfiguration; // @dynamic pasteConfiguration;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic) long long selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) long long textScriptType;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

