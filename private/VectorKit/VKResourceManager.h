//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOResourceManifestConfiguration;

@interface VKResourceManager : NSObject
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
}

- (_Bool)isDevResourceWithName:(id)arg1;
- (id)pathForResourceWithName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1;
- (id)_localNameForResourceName:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end
