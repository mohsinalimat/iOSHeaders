//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSMachPortRight.h>

@interface BSMachPortReceiveRight : BSMachPortRight
{
}

+ (_Bool)supportsSecureCoding;
+ (void)_queue_destroyPort:(unsigned int)arg1;
+ (id)_rightDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)_queue_isUsable;
- (id)_initWithPort:(unsigned int)arg1 previousTrace:(id)arg2;
- (id)initWithPort:(unsigned int)arg1;
- (id)init;

@end

