//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject
{
    int _replyBlockIndex;
    int _returnAddressIndex;
    SEL _sel;
    NSMethodSignature *_sig;
}

@property(readonly, retain, nonatomic) NSMethodSignature *sig; // @synthesize sig=_sig;
@property(readonly, nonatomic) int returnAddressIndex; // @synthesize returnAddressIndex=_returnAddressIndex;
@property(readonly, nonatomic) int replyBlockIndex; // @synthesize replyBlockIndex=_replyBlockIndex;
@property(readonly, nonatomic) SEL sel; // @synthesize sel=_sel;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *typeStr; // @dynamic typeStr;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;

@end

