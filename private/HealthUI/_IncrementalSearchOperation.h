//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRegularExpression, NSString;

@interface _IncrementalSearchOperation : NSOperation
{
    NSRegularExpression *_regularExpression;
    NSString *_searchBody;
    CDUnknownBlockType _searchResultsBlock;
    CDUnknownBlockType _searchFinishedBlock;
}

@property(readonly) CDUnknownBlockType searchFinishedBlock; // @synthesize searchFinishedBlock=_searchFinishedBlock;
@property(readonly) CDUnknownBlockType searchResultsBlock; // @synthesize searchResultsBlock=_searchResultsBlock;
@property(readonly) NSString *searchBody; // @synthesize searchBody=_searchBody;
@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3 finishedBlock:(CDUnknownBlockType)arg4;

@end

