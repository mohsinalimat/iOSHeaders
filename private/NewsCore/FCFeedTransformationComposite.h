//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming>
{
    _Bool _shouldLogTransformationResults;
    NSMutableArray *_transformationLogs;
    NSArray *_feedTransformations;
}

@property(copy, nonatomic) NSArray *feedTransformations; // @synthesize feedTransformations=_feedTransformations;
@property(readonly, nonatomic) NSMutableArray *transformationLogs; // @synthesize transformationLogs=_transformationLogs;
@property(readonly, nonatomic) _Bool shouldLogTransformationResults; // @synthesize shouldLogTransformationResults=_shouldLogTransformationResults;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFeedTransformations:(id)arg1 logTransformationResults:(_Bool)arg2;
- (id)initWithFeedTransformations:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

