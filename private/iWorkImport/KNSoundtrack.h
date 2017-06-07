//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNSoundtrack : TSPObject <NSCopying>
{
    float _volume;
    long long _mode;
    NSArray *_media;
}

+ (_Bool)needsObjectUUID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1;
@property(copy, nonatomic) NSArray *media;
@property(nonatomic) long long mode;
@property(nonatomic) float volume;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
