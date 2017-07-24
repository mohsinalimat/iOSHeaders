//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPIdentifierSet, NSDictionary, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding>
{
    _Bool _libraryContent;
    NSDictionary *_dictionary;
    MPIdentifierSet *_identifiers;
    NSString *_itemKind;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isLibraryContent) _Bool libraryContent; // @synthesize libraryContent=_libraryContent;
@property(readonly, copy, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, copy, nonatomic) MPIdentifierSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

