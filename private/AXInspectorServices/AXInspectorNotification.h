//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXInspectorServices/NSSecureCoding-Protocol.h>

@interface AXInspectorNotification : NSObject <NSSecureCoding>
{
    int _notification;
    id _value;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) int notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

