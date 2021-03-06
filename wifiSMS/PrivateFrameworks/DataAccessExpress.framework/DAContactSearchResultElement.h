/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSData, NSString;



@interface DAContactSearchResultElement : NSObject <NSCoding>
{
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_workPhone;
    NSString *_mobilePhone;
    NSString *_company;
    NSString *_title;
    NSString *_homePhone;
    NSString *_alias;
    NSString *_office;
    NSString *_serverSource;
    NSString *_recordName;
    NSString *_faxPhone;
    NSString *_department;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSData *_jpegPhoto;
    NSString *_imAddress;
    NSString *_uri;
    NSString *_buildingName;
    NSString *_pagerNumber;
    NSString *_postalAddress;
    NSString *_homePostalAddress;
}

@property(copy) NSString *pagerNumber; /* unknown property attribute: V_pagerNumber */
@property(copy) NSString *buildingName; /* unknown property attribute: V_buildingName */
@property(copy) NSString *uri; /* unknown property attribute: V_uri */
@property(copy) NSString *imAddress; /* unknown property attribute: V_imAddress */
@property(copy) NSData *jpegPhoto; /* unknown property attribute: V_jpegPhoto */
@property(copy) NSString *country; /* unknown property attribute: V_country */
@property(copy) NSString *zip; /* unknown property attribute: V_zip */
@property(copy) NSString *state; /* unknown property attribute: V_state */
@property(copy) NSString *city; /* unknown property attribute: V_city */
@property(copy) NSString *street; /* unknown property attribute: V_street */
@property(copy) NSString *department; /* unknown property attribute: V_department */
@property(copy) NSString *faxPhone; /* unknown property attribute: V_faxPhone */
@property(copy) NSString *recordName; /* unknown property attribute: V_recordName */
@property(copy) NSString *serverSource; /* unknown property attribute: V_serverSource */
@property(copy) NSString *office; /* unknown property attribute: V_office */
@property(copy) NSString *homePhone; /* unknown property attribute: V_homePhone */
@property(copy) NSString *alias; /* unknown property attribute: V_alias */
@property(copy) NSString *title; /* unknown property attribute: V_title */
@property(copy) NSString *company; /* unknown property attribute: V_company */
@property(copy) NSString *mobilePhone; /* unknown property attribute: V_mobilePhone */
@property(copy) NSString *workPhone; /* unknown property attribute: V_workPhone */
@property(copy) NSString *emailAddress; /* unknown property attribute: V_emailAddress */
@property(copy) NSString *lastName; /* unknown property attribute: V_lastName */
@property(copy) NSString *firstName; /* unknown property attribute: V_firstName */
@property(copy) NSString *displayName; /* unknown property attribute: V_displayName */


- (void)dealloc;
- (id)description;
- (BOOL)isEqualToDAContactSearchResultElement:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_setPostalAddress:(id)arg1;
- (void)_setHomePostalAddress:(id)arg1;
- (void)_cleanUpDanglingPostalAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pagerNumber;
- (void)setPagerNumber:(id)arg1;
- (id)buildingName;
- (void)setBuildingName:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)imAddress;
- (void)setImAddress:(id)arg1;
- (id)jpegPhoto;
- (void)setJpegPhoto:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)zip;
- (void)setZip:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)street;
- (void)setStreet:(id)arg1;
- (id)department;
- (void)setDepartment:(id)arg1;
- (id)faxPhone;
- (void)setFaxPhone:(id)arg1;
- (id)recordName;
- (void)setRecordName:(id)arg1;
- (id)serverSource;
- (void)setServerSource:(id)arg1;
- (id)office;
- (void)setOffice:(id)arg1;
- (id)homePhone;
- (void)setHomePhone:(id)arg1;
- (id)alias;
- (void)setAlias:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)company;
- (void)setCompany:(id)arg1;
- (id)mobilePhone;
- (void)setMobilePhone:(id)arg1;
- (id)workPhone;
- (void)setWorkPhone:(id)arg1;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (id)lastName;
- (void)setLastName:(id)arg1;
- (id)firstName;
- (void)setFirstName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (void*)createAddressBookRecord;

@end
