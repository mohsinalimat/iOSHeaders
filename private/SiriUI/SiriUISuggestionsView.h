//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableOrderedSet, NSString, NSTimer, SiriUIAcousticIDSpinner, UIColor, UILabel;
@protocol SiriUISuggestionsViewDelegate;

@interface SiriUISuggestionsView : UIView
{
    UILabel *_headerLabel;
    UILabel *_oldHeaderLabel;
    UILabel *_subheaderLabel;
    UILabel *_largeSubheaderLabel;
    NSArray *_suggestionLabels;
    NSArray *_oldSuggestionLabels;
    _Bool _firstSuggestionPresentation;
    NSTimer *_updateSuggestionsTimer;
    NSMutableOrderedSet *_pendedSuggestions;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    unsigned long long _numberOfSuggestions;
    NSString *_headerText;
    NSString *_subheaderText;
    NSString *_largeSubheaderText;
    UIColor *_textColor;
    id <SiriUISuggestionsViewDelegate> _delegate;
    long long _orientation;
    struct CGPoint _contentOffset;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <SiriUISuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *largeSubheaderText; // @synthesize largeSubheaderText=_largeSubheaderText;
@property(copy, nonatomic) NSString *subheaderText; // @synthesize subheaderText=_subheaderText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (double)_headerFontSize;
- (double)_suggestionFontSize;
- (double)_largeSubheaderFontSize;
- (double)_subheaderFontSize;
- (double)_headerToLargeSubheaderOffset;
- (double)_headerToSubheaderOffset;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (double)_suggestionSpacing;
- (_Bool)_isPadHeightType;
- (int)_heightType;
- (double)_updateSuggestionsDelay;
- (_Bool)_isPortrait;
- (void)hideAcousticIDSpinner;
- (void)_reallyShowAcousticIDSpinner;
- (void)showAcousticIDSpinner;
- (void)_updateSuggestions;
- (void)clearCurrentSuggestions;
- (_Bool)isShowingSuggestions;
- (void)stopSuggesting;
- (void)startSuggesting;
- (void)_setSuggestionTexts:(id)arg1;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateOutSuggestionAtIndex:(unsigned long long)arg1;
- (void)_animateInSuggestionAtIndex:(unsigned long long)arg1;
- (void)_animateHeaderOut;
- (void)_animateHeaderIn;
- (void)layoutSubviews;
- (void)_loadSuggestionsViewsIfNeeded;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSubheaderViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end
