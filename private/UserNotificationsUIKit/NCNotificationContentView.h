//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCContentSizeCategoryAdjusting-Protocol.h>

@class NCLookViewFontProvider, NSMapTable, NSMutableDictionary, NSString, UIImage, UIImageView, UILabel;

@interface NCNotificationContentView : UIView <NCContentSizeCategoryAdjusting>
{
    long long _lookStyle;
    struct UIEdgeInsets _contentInsets;
    NCLookViewFontProvider *_fontProvider;
    UIView *_contentView;
    UILabel *_hintTextLabel;
    UIImageView *_thumbnailImageView;
    NSMapTable *_labelsToDrawingContexts;
    NSMutableDictionary *_secondaryLabelWidthToMeasuredNumLines;
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
    UIView *_accessoryView;
    UILabel *_primaryLabel;
    UILabel *_outgoingPrimaryLabel;
    UILabel *_primarySubtitleLabel;
    UILabel *_outgoingPrimarySubtitleLabel;
    UILabel *_secondaryLabel;
    UILabel *_outgoingSecondaryLabel;
}

@property(retain, nonatomic, getter=_outgoingSecondaryLabel, setter=_setOutgoingSecondaryLabel:) UILabel *outgoingSecondaryLabel; // @synthesize outgoingSecondaryLabel=_outgoingSecondaryLabel;
@property(retain, nonatomic, getter=_secondaryLabel, setter=_setSecondaryLabel:) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic, getter=_outgoingPrimarySubtitleLabel, setter=_setOutgoingPrimarySubtitleLabel:) UILabel *outgoingPrimarySubtitleLabel; // @synthesize outgoingPrimarySubtitleLabel=_outgoingPrimarySubtitleLabel;
@property(retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(retain, nonatomic, getter=_outgoingPrimaryLabel, setter=_setOutgoingPrimaryLabel:) UILabel *outgoingPrimaryLabel; // @synthesize outgoingPrimaryLabel=_outgoingPrimaryLabel;
@property(retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)layoutSubviews;
- (struct CGRect)_frameForThumbnailInRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *thumbnail;
@property(retain, nonatomic) NSString *hintText;
- (id)_hintTextLabel;
- (id)_lazyHintTextLabel;
- (id)_newHintTextLabel;
- (void)_updateFontForHintTextLabel:(id)arg1 withStyle:(long long)arg2;
@property(retain, nonatomic) NSString *secondaryText;
- (id)_lazyOutgoingSecondaryLabel;
- (id)_lazySecondaryLabel;
- (id)_newSecondaryLabel;
@property(nonatomic) unsigned long long messageNumberOfLines;
- (void)_updateFontForSecondaryLabel:(id)arg1 withStyle:(long long)arg2;
- (id)_lazyThumbnailImageView;
@property(retain, nonatomic) NSString *primarySubtitleText;
- (id)_lazyOutgoingPrimarySubtitleLabel;
- (id)_lazyPrimarySubtitleLabel;
@property(retain, nonatomic) NSString *primaryText;
- (id)_lazyOutgoingPrimaryLabel;
- (id)_lazyPrimaryLabel;
- (id)_newPrimaryLabel;
- (void)_updateFontForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;
- (void)_setText:(id)arg1 withFinalLabel:(id)arg2 setter:(CDUnknownBlockType)arg3 andTransitionLabel:(id)arg4 setter:(CDUnknownBlockType)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)_hintTextLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)_secondaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(double)arg3;
- (long long)_secondaryLabelNumberOfLinesWithMeasuredNumberOfLines:(long long)arg1;
- (long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1;
- (struct CGRect)_primarySubtitleLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)_primaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (double)_secondaryTextBaselineOffsetForCurrentStyle;
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
- (struct UIEdgeInsets)_contentInsetsForStyle:(long long)arg1;
- (struct UIEdgeInsets)_contentInsetsForLongLook;
- (struct UIEdgeInsets)_contentInsetsForShortLook;
- (struct UIEdgeInsets)_contentInsets;
- (double)_hintTextBaselineOffset;
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;
- (long long)_numberOfLinesForLabel:(id)arg1 inRectWithSize:(struct CGSize)arg2;
- (void)_setFontProvider:(id)arg1;
- (id)_fontProvider;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

