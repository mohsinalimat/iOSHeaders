//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFocusGuide, UIFont;
@protocol PXUIWidgetFooterViewDelegate;

@interface PXUIWidgetFooterView : UIView
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool hasContent;
        _Bool disclosure;
        _Bool separators;
        _Bool focusGuide;
    } _needsUpdateFlags;
    struct {
        _Bool didSelectDisclosure;
    } _delegateRespondsTo;
    _Bool __hasContent;
    id <PXUIWidgetFooterViewDelegate> _delegate;
    NSString *_disclosureTitle;
    UIFont *_font;
    long long _layoutStyle;
    NSArray *__constraints;
    UIButton *__disclosureButton;
    UIView *__leadingSeparator;
    UIView *__trailingSeparator;
    UIFocusGuide *__focusGuide;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) UIFocusGuide *_focusGuide; // @synthesize _focusGuide=__focusGuide;
@property(readonly, nonatomic) UIView *_trailingSeparator; // @synthesize _trailingSeparator=__trailingSeparator;
@property(readonly, nonatomic) UIView *_leadingSeparator; // @synthesize _leadingSeparator=__leadingSeparator;
@property(readonly, nonatomic) UIButton *_disclosureButton; // @synthesize _disclosureButton=__disclosureButton;
@property(copy, nonatomic, setter=_setConstraints:) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property(nonatomic, setter=_setHasContent:) _Bool _hasContent; // @synthesize _hasContent=__hasContent;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(nonatomic) __weak id <PXUIWidgetFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateFocusGuideIfNeeded;
- (void)_invalidateFocusGuide;
- (void)_updateSeparatorsIfNeeded;
- (void)_invalidateSeparators;
- (void)_updateDisclosureIfNeeded;
- (void)_invalidateDisclosure;
- (void)_updateHasContentIfNeeded;
- (void)_invalidateHasContent;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_handleDisclosureButton:(id)arg1;
- (id)_focusGuideCreateIfNeeded:(_Bool)arg1;
- (id)_trailingSeparatorCreateIfNeeded:(_Bool)arg1;
- (id)_leadingSeparatorCreateIfNeeded:(_Bool)arg1;
- (id)_disclosureButtonCreateIfNeeded:(_Bool)arg1;
- (void)updateConstraints;

@end

