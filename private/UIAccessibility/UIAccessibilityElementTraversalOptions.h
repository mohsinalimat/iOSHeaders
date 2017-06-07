//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIAccessibilityElementTraversalOptions : NSObject
{
    _Bool _shouldReturnScannerGroups;
    _Bool _shouldOnlyIncludeElementsWithVisibleFrame;
    _Bool _shouldIncludeKeyboardObscuredElements;
    _Bool _shouldUseAllSubviews;
    _Bool _includeHiddenViews;
    _Bool _sorted;
    _Bool _ignoreObscuresScreen;
    _Bool _forSpeakScreen;
    _Bool _shouldIncludeStatusBarWindow;
    int _direction;
    CDUnknownBlockType _leafNodePredicate;
}

+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(_Bool)arg1;
+ (id)defaultVoiceOverOptions;
+ (id)options;
@property(nonatomic) _Bool shouldIncludeStatusBarWindow; // @synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow;
@property(nonatomic) _Bool forSpeakScreen; // @synthesize forSpeakScreen=_forSpeakScreen;
@property(nonatomic) _Bool ignoreObscuresScreen; // @synthesize ignoreObscuresScreen=_ignoreObscuresScreen;
@property(nonatomic) _Bool sorted; // @synthesize sorted=_sorted;
@property(nonatomic) _Bool includeHiddenViews; // @synthesize includeHiddenViews=_includeHiddenViews;
@property(nonatomic) _Bool shouldUseAllSubviews; // @synthesize shouldUseAllSubviews=_shouldUseAllSubviews;
@property(nonatomic) _Bool shouldIncludeKeyboardObscuredElements; // @synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements;
@property(nonatomic) _Bool shouldOnlyIncludeElementsWithVisibleFrame; // @synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame;
@property(copy, nonatomic) CDUnknownBlockType leafNodePredicate; // @synthesize leafNodePredicate=_leafNodePredicate;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool shouldReturnScannerGroups; // @synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups;
- (void)dealloc;
- (id)description;
- (id)init;

@end

