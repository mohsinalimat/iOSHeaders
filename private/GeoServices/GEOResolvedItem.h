//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDResolvedItem, NSString;

__attribute__((visibility("hidden")))
@interface GEOResolvedItem : NSObject
{
    GEOPDResolvedItem *_resolvedItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int itemType;
@property(readonly, nonatomic) unsigned long long resultIndex;
@property(readonly, nonatomic) NSString *extractedTerm;
- (id)initWithResolvedItem:(id)arg1;

@end
