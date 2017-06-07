//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/SFFeedbackListener-Protocol.h>

@class NSArray, NSString;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener>
{
    int _uiTarget;
    NSArray *_sections;
}

+ (id)feedbackListenerForParsec;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)traits;
- (void)dealloc;
- (id)initWithClientType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

