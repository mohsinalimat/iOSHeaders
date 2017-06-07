//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

#import <NewsCore/FCFeedViewportRemoveGroupOperationType-Protocol.h>

@class FCFeedDescriptor, FCFeedViewport, FCFeedViewportDiff, NSString;

@interface FCFeedViewportRemoveGroupOperation : FCOperation <FCFeedViewportRemoveGroupOperationType>
{
    FCFeedViewport *_viewport;
    NSString *_groupID;
    FCFeedDescriptor *_feedDescriptor;
    CDUnknownBlockType _removeGroupCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_viewportDiff;
}

@property(retain, nonatomic) FCFeedViewportDiff *viewportDiff; // @synthesize viewportDiff=_viewportDiff;
@property(retain, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property(copy, nonatomic) CDUnknownBlockType removeGroupCompletionHandler; // @synthesize removeGroupCompletionHandler=_removeGroupCompletionHandler;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
- (void).cxx_destruct;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

