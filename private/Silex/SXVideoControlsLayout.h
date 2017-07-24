//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SXVideoControlsLayout : NSObject
{
    _Bool _showLoadingIndicator;
    _Bool _displayAsPaused;
    _Bool _autoHidingEnabled;
    _Bool _controlsShouldBeVisible;
    _Bool _muted;
    NSArray *_upperRightControls;
    NSArray *_upNextControls;
    unsigned long long _skipThreshold;
    NSString *_upNextTitle;
    NSString *_upNextSubtitle;
}

@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) NSString *upNextSubtitle; // @synthesize upNextSubtitle=_upNextSubtitle;
@property(retain, nonatomic) NSString *upNextTitle; // @synthesize upNextTitle=_upNextTitle;
@property(nonatomic) unsigned long long skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property(retain, nonatomic) NSArray *upNextControls; // @synthesize upNextControls=_upNextControls;
@property(retain, nonatomic) NSArray *upperRightControls; // @synthesize upperRightControls=_upperRightControls;
@property(nonatomic) _Bool controlsShouldBeVisible; // @synthesize controlsShouldBeVisible=_controlsShouldBeVisible;
@property(nonatomic) _Bool autoHidingEnabled; // @synthesize autoHidingEnabled=_autoHidingEnabled;
@property(nonatomic) _Bool displayAsPaused; // @synthesize displayAsPaused=_displayAsPaused;
@property(nonatomic) _Bool showLoadingIndicator; // @synthesize showLoadingIndicator=_showLoadingIndicator;
- (void).cxx_destruct;

@end

