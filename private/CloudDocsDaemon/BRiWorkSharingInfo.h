//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface BRiWorkSharingInfo : NSObject <NSSecureCoding>
{
    BOOL _options;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) BOOL options; // @synthesize options=_options;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

