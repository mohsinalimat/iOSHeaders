//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpKit/NSCoding-Protocol.h>
#import <HelpKit/NSCopying-Protocol.h>

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_anchor;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

