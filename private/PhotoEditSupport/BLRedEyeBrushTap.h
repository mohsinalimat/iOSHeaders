//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoEditSupport/AutoEncodeDecodeObject.h>

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject
{
    int _destinationWidth;
    double _timestamp;
    NSDictionary *_eyeRepairData;
    struct CGPoint _point;
}

@property(retain, nonatomic) NSDictionary *eyeRepairData; // @synthesize eyeRepairData=_eyeRepairData;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) int destinationWidth; // @synthesize destinationWidth=_destinationWidth;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)init;
- (id)keysToEncode;

@end

