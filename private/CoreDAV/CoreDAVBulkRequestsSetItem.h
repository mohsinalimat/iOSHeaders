//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
{
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVBulkRequestsItem *simpleItem; // @synthesize simpleItem=_simpleItem;
@property(retain, nonatomic) CoreDAVBulkRequestsItem *crudItem; // @synthesize crudItem=_crudItem;
@property(readonly, nonatomic) NSDictionary *dictRepresentation;
- (id)description;
- (void)dealloc;
- (id)init;

@end

