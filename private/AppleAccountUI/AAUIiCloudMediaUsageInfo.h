//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject
{
    float _bytesUsed;
    NSString *_mediaType;
    UIColor *_representativeColor;
    NSString *_displayLabel;
}

@property(retain, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(nonatomic) float bytesUsed; // @synthesize bytesUsed=_bytesUsed;
@property(retain, nonatomic) UIColor *representativeColor; // @synthesize representativeColor=_representativeColor;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)capacityBarCatagory;
- (id)initWithMediaType:(id)arg1 representativeColor:(id)arg2 bytesUsed:(float)arg3;

@end

