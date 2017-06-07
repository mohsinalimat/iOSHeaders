//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKFractionFormat : TSKFormat <NSCopying>
{
    int _fractionAccuracy;
}

@property(readonly, nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
- (id)asFractionFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFractionAccuracy:(int)arg1;
- (id)initWithFormatType:(int)arg1;

@end
