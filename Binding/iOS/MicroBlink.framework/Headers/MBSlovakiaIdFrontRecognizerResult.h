//
//  MBSlovakiaIdFrontRecognizerResult.h
//  MicroBlinkDev
//
//  Created by Dino Gustin on 22/05/2018.
//

#import "MBLegacyRecognizerResult.h"

#import "MBFaceImageResult.h"
#import "MBSignatureImageResult.h"
#import "MBFullDocumentImageResult.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Class representing values obtained when scanning front side of Slovak ID
 */
MB_CLASS_AVAILABLE_IOS(8.0)
@interface MBSlovakiaIdFrontRecognizerResult : MBLegacyRecognizerResult<NSCopying, MBFaceImageResult, MBSignatureImageResult, MBFullDocumentImageResult>

MB_INIT_UNAVAILABLE

/**
 * The first name of the Slovakian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *firstName;

/**
 * The last name of the Slovakian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *lastName;

/**
 * The sex of the Slovakian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *sex;

/**
 * The nationality of the Slovakian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *nationality;

/**
 * The date of birth of the Slovakian ID owner in dd.MM.yyyy format.
 */
@property (nonatomic, readonly, nullable) NSString *rawDateOfBirth;

/**
 * The date of birth of the Slovakian ID owner.
 */
@property (nonatomic, readonly, nullable) NSDate *dateOfBirth;

/**
 * The date of expiry of the Slovakian ID in dd.MM.yyyy format.
 */
@property (nonatomic, readonly, nullable) NSString *rawDateOfExpiry;

/**
 * The date of expiry of the Slovakian ID.
 */
@property (nonatomic, readonly, nullable) NSDate *dateOfExpiry;

/**
 * The date of issue of the Slovakian ID in dd.MM.yyyy format.
 */
@property (nonatomic, readonly, nullable) NSString *rawDateOfIssue;

/**
 * The date of issue of the Slovakian ID.
 */
@property (nonatomic, readonly, nullable) NSDate *dateOfIssue;

/**
 * The issuing authority of the ID.
 */
@property (nonatomic, readonly, nullable) NSString *issuedBy;

/**
 * The personal number of the Slovakian ID owner.
 */
@property (nonatomic, readonly, nullable) NSString *personalNumber;

/**
 * The document number of the Slovakian ID.
 */
@property (nonatomic, readonly, nullable) NSString *documentNumber;

@end

NS_ASSUME_NONNULL_END