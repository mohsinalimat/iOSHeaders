//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMMachineReadableCodeLoggingController : NSObject
{
    _Bool __seenMachineReadableObjectOfAcceptableSize;
    _Bool __seenMachineReadableObjectOfUnacceptableSize;
}

@property(nonatomic, setter=_setSeenMachineReadableObjectOfUnacceptableSize:) _Bool _seenMachineReadableObjectOfUnacceptableSize; // @synthesize _seenMachineReadableObjectOfUnacceptableSize=__seenMachineReadableObjectOfUnacceptableSize;
@property(nonatomic, setter=_setSeenMachineReadableObjectOfAcceptableSize:) _Bool _seenMachineReadableObjectOfAcceptableSize; // @synthesize _seenMachineReadableObjectOfAcceptableSize=__seenMachineReadableObjectOfAcceptableSize;
- (void)resetLoggingState;
- (void)logMachineReadableCodeResult:(id)arg1 isOfSignificantSize:(_Bool)arg2;
- (void)logMachineReadableCodeResultDuringInactiveAppState;
- (id)init;

@end

