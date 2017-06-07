//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString, NSURL, SFSearchResult, WBSParsecImageRepresentation, WBSParsecSearchMapsResult;

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem>
{
    WBSParsecImageRepresentation *_icon;
    WBSParsecSearchMapsResult *_mapsResult;
    NSString *_title;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *feedbackIdentifier;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)iconWithSession:(id)arg1;
- (id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(readonly) Class superclass;

@end

