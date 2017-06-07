//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSWPTopicNumberEntry : NSObject <NSCopying>
{
    unsigned long long _number;
    unsigned long long _charIndex;
}

@property(readonly, nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
@property(readonly, nonatomic) unsigned long long number; // @synthesize number=_number;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumber:(unsigned long long)arg1 charIndex:(unsigned long long)arg2;
- (id)init;

@end
