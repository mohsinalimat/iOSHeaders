//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying>
{
    NSString *_title;
    SSURLRequestProperties *_urlRequestProperties;
}

@property(readonly, nonatomic) SSURLRequestProperties *URLRequestProperties; // @synthesize URLRequestProperties=_urlRequestProperties;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

