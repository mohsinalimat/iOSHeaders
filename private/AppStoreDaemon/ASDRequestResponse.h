//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError;

@interface ASDRequestResponse : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _success;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSError *error; // @synthesize error=_error;
@property _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

