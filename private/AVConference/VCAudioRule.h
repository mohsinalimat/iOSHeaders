//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioRule : NSObject
{
    int _payload;
    _Bool _isSecondary;
    _Bool _sbr;
    unsigned int _samplesPerBlock;
}

@property(readonly, nonatomic) unsigned int samplesPerBlock; // @synthesize samplesPerBlock=_samplesPerBlock;
@property(readonly, nonatomic) _Bool sbr; // @synthesize sbr=_sbr;
@property(readonly, nonatomic) _Bool isSecondary; // @synthesize isSecondary=_isSecondary;
@property(readonly, nonatomic) int payload; // @synthesize payload=_payload;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3 samplesPerBlock:(unsigned int)arg4;

@end

