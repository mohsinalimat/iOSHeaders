//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRGameControllerProperties : NSObject
{
    unsigned int _playerIndex;
    int _profile;
    NSString *_vendorName;
    double _buttonAUpDelay;
}

@property(nonatomic) int profile; // @synthesize profile=_profile;
@property(nonatomic) double buttonAUpDelay; // @synthesize buttonAUpDelay=_buttonAUpDelay;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(nonatomic) unsigned int playerIndex; // @synthesize playerIndex=_playerIndex;
- (void)dealloc;
- (id)init;

@end

