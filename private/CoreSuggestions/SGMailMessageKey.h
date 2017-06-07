//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_source;
    NSString *_messageId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToMailMessageKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

