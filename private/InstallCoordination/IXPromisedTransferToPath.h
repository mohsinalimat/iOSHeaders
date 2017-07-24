//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
@property(nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
@property(nonatomic) _Bool shouldCopy; // @dynamic shouldCopy;
@property(retain, nonatomic) NSURL *transferPath; // @dynamic transferPath;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 transferPath:(id)arg3 diskSpaceNeeded:(unsigned long long)arg4;
- (_Bool)_doInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(retain, nonatomic) IXPromisedTransferToPathSeed *seed; // @dynamic seed;

@end

