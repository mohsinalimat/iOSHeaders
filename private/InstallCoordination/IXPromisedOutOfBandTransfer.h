//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXOpaqueDataPromise.h>

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPromisedOutOfBandTransferSeed;

@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;

// Remaining properties
@property(nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(retain, nonatomic) IXPromisedOutOfBandTransferSeed *seed; // @dynamic seed;

@end

