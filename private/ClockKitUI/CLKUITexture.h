//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUITexture : NSObject
{
    NSString *_uuid;
    unsigned long long _status;
    unsigned long long _width;
    unsigned long long _height;
}

+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)backing;
- (id)initWithUuid:(id)arg1;

@end

