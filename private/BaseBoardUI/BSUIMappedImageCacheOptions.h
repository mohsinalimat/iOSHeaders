//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoardUI/NSCopying-Protocol.h>

@protocol BSPathProviding;

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying>
{
    id <BSPathProviding> _containerPathProvider;
}

+ (id)optionsWithContainerPathProvider:(id)arg1;
@property(retain, nonatomic) id <BSPathProviding> containerPathProvider; // @synthesize containerPathProvider=_containerPathProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

