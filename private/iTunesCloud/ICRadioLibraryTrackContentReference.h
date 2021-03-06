//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRadioContentReference.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ICRadioLibraryTrackContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>
{
    NSString *_albumArtistName;
    NSString *_albumName;
    NSString *_artistName;
    NSString *_composerName;
    NSString *_copyright;
    NSString *_genreName;
    NSString *_kind;
    NSString *_name;
    NSNumber *_discCount;
    NSNumber *_discNumber;
    NSNumber *_fileSize;
    NSNumber *_compilation;
    NSNumber *_duration;
    NSNumber *_storeAdamIdentifier;
    NSNumber *_storeCloudIdentifier;
    NSNumber *_trackCount;
    NSNumber *_trackNumber;
    NSNumber *_year;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *year; // @synthesize year=_year;
@property(copy, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property(copy, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property(copy, nonatomic) NSNumber *storeCloudIdentifier; // @synthesize storeCloudIdentifier=_storeCloudIdentifier;
@property(copy, nonatomic) NSNumber *storeAdamIdentifier; // @synthesize storeAdamIdentifier=_storeAdamIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic, getter=isCompilation) NSNumber *compilation; // @synthesize compilation=_compilation;
@property(copy, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property(copy, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSNumber *discNumber; // @synthesize discNumber=_discNumber;
@property(copy, nonatomic) NSNumber *discCount; // @synthesize discCount=_discCount;
@property(copy, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(copy, nonatomic) NSString *composerName; // @synthesize composerName=_composerName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)matchDictionary;
- (long long)contentType;

@end

