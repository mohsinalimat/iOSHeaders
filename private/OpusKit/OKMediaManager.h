//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OKMediaManagerDelegate;

@interface OKMediaManager : NSObject
{
    id <OKMediaManagerDelegate> _delegate;
    NSMutableDictionary *_mediaSourcesByScheme;
}

+ (id)defaultManager;
- (id)mediaURLsForMediaObjects:(id)arg1;
- (id)mediaURLForMediaObject:(id)arg1;
- (id)mediaItemsForURLs:(id)arg1;
- (id)mediaItemForURL:(id)arg1;
- (Class)mediaItemClassForURL:(id)arg1;
- (void)removeMediaItemClass:(Class)arg1;
- (void)addMediaItemClass:(Class)arg1;
@property(nonatomic) id <OKMediaManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

