<!DOCTYPE html>
<meta charset="utf-8">
<title>CSS Writing Modes Test: Test orientation of characters.</title>
<link rel="help" href="http://www.w3.org/TR/css-writing-modes-3/#text-orientation">
<meta name="assert" content="Test orientation of characters">
<meta name="flags" content="dom font combo">
<link rel="author" title="Koji Ishii" href="mailto:kojiishi@gmail.com">
<script src="/resources/testharness.js"></script>
<script src="/resources/testharnessreport.js"></script>
<style>
@font-face {
    font-family: "orientation";
    src: url("support/adobe-fonts/CSSHWOrientationTest.otf");
}
.test {
    font: 16px/1 "orientation";
    height: 17em;
    writing-mode: vertical-rl;
}
.line {
    white-space: pre;
}
.U {
    text-orientation: upright;
}
.R {
    text-orientation: sideways;
}
#details {
    margin: 1em .5em;
}
summary {
    font-size: 1.2em;
    font-weight: bold;
    margin-top: .5em;
}
</style>
<div id="log"></div>
<div id="details"></div>
<div id="container">
<div data-vo="R" class="test">
<div data-block="Basic">
<div class="line"> !&#34;#$%&amp;&#39;()*+,-./0123456789:;&lt;=&gt;?</div>
<div class="line">@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_</div>
<div class="line">`abcdefghijklmnopqrstuvwxyz{|}~</div>
</div>
<div data-block="Latin">
<div class="line"> ¡¢£¤¥¦¨ª«¬¯°²³´µ¶·¸¹º»¿ÀÁÂÃÄÅÆÇ</div>
<div class="line">ÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØÙÚÛÜÝÞßàáâãäåæçè</div>
<div class="line">éêëìíîïðñòóôõöøùúûüýþÿĀāĂăĄąĆćĈĉ</div>
<div class="line">ĊċČčĎďĐđĒēĔĕĖėĘęĚěĜĝĞğĠġĢģĤĥĦħĨĩ</div>
<div class="line">ĪīĬĭĮįİıĲĳĴĵĶķĸĹĺĻļĽľĿŀŁłŃńŅņŇňŉ</div>
<div class="line">ŊŋŌōŎŏŐőŒœŔŕŖŗŘřŚśŜŝŞşŠšŢţŤťŦŧŨũ</div>
<div class="line">ŪūŬŭŮůŰűŲųŴŵŶŷŸŹźŻżŽžſƀƁƂƃƄƅƆƇƈƉ</div>
<div class="line">ƊƋƌƍƎƏƐƑƒƓƔƕƖƗƘƙƚƛƜƝƞƟƠơƢƣƤƥƦƧƨƩ</div>
<div class="line">ƪƫƬƭƮƯưƱƲƳƴƵƶƷƸƹƺƻƼƽƾƿǀǁǂǃǄǅǆǇǈǉ</div>
<div class="line">ǊǋǌǍǎǏǐǑǒǓǔǕǖǗǘǙǚǛǜǝǞǟǠǡǢǣǤǥǦǧǨǩ</div>
<div class="line">ǪǫǬǭǮǯǰǱǲǳǴǵǶǷǸǹǺǻǼǽǾǿȀȁȂȃȄȅȆȇȈȉ</div>
<div class="line">ȊȋȌȍȎȏȐȑȒȓȔȕȖȗȘșȚțȜȝȞȟȠȡȢȣȤȥȦȧȨȩ</div>
<div class="line">ȪȫȬȭȮȯȰȱȲȳȴȵȶȷȸȹȺȻȼȽȾȿɀɁɂɃɄɅɆɇɈɉ</div>
<div class="line">ɊɋɌɍɎɏ</div>
</div>
<div data-block="IPA">
<div class="line">ɐɑɒɓɔɕɖɗɘəɚɛɜɝɞɟɠɡɢɣɤɥɦɧɨɩɪɫɬɭɮɯ</div>
<div class="line">ɰɱɲɳɴɵɶɷɸɹɺɻɼɽɾɿʀʁʂʃʄʅʆʇʈʉʊʋʌʍʎʏ</div>
<div class="line">ʐʑʒʓʔʕʖʗʘʙʚʛʜʝʞʟʠʡʢʣʤʥʦʧʨʩʪʫʬʭʮʯ</div>
</div>
<div data-block="Spacing">
<div class="line">ʰʱʲʳʴʵʶʷʸʹʺʻʼʽʾʿˀˁ˂˃˄˅ˆˇˈˉˊˋˌˍˎˏ</div>
<div class="line">ːˑ˒˓˔˕˖˗˘˙˚˛˜˝˞˟ˠˡˢˣˤ˥˦˧˨˩ˬ˭ˮ˯˰˱</div>
<div class="line">˲˳˴˵˶˷˸˹˺˻˼˽˾˿</div>
</div>
<div data-block="Greek">
<div class="line">ͰͱͲͳʹ͵Ͷͷͺͻͼͽ;Ϳ΄΅Ά·ΈΉΊΌΎΏΐΑΒΓΔΕΖΗ</div>
<div class="line">ΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩΪΫάέήίΰαβγδεζηθ</div>
<div class="line">ικλμνξοπρςστυφχψωϊϋόύώϏϐϑϒϓϔϕϖϗϘ</div>
<div class="line">ϙϚϛϜϝϞϟϠϡϢϣϤϥϦϧϨϩϪϫϬϭϮϯϰϱϲϳϴϵ϶Ϸϸ</div>
<div class="line">ϹϺϻϼϽϾϿ</div>
</div>
<div data-block="Cyrillic">
<div class="line">ЀЁЂЃЄЅІЇЈЉЊЋЌЍЎЏАБВГДЕЖЗИЙКЛМНОП</div>
<div class="line">РСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмноп</div>
<div class="line">рстуфхцчшщъыьэюяѐёђѓєѕіїјљњћќѝўџ</div>
<div class="line">ѠѡѢѣѤѥѦѧѨѩѪѫѬѭѮѯѰѱѲѳѴѵѶѷѸѹѺѻѼѽѾѿ</div>
<div class="line">Ҁҁ҂ҊҋҌҍҎҏҐґҒғҔҕҖҗҘҙҚқҜҝҞҟҠҡҢңҤҥҦ</div>
<div class="line">ҧҨҩҪҫҬҭҮүҰұҲҳҴҵҶҷҸҹҺһҼҽҾҿӀӁӂӃӄӅӆ</div>
<div class="line">ӇӈӉӊӋӌӍӎӏӐӑӒӓӔӕӖӗӘәӚӛӜӝӞӟӠӡӢӣӤӥӦ</div>
<div class="line">ӧӨөӪӫӬӭӮӯӰӱӲӳӴӵӶӷӸӹӺӻӼӽӾӿԀԁԂԃԄԅԆ</div>
<div class="line">ԇԈԉԊԋԌԍԎԏԐԑԒԓԔԕԖԗԘԙԚԛԜԝԞԟԠԡԢԣԤԥԦ</div>
<div class="line">ԧԨԩԪԫԬԭԮԯ</div>
</div>
<div data-block="Armenian">
<div class="line">ԱԲԳԴԵԶԷԸԹԺԻԼԽԾԿՀՁՂՃՄՅՆՇՈՉՊՋՌՍՎՏՐ</div>
<div class="line">ՑՒՓՔՕՖՙ՚՛՜՝՞՟աբգդեզէըթժիլխծկհձղճ</div>
<div class="line">մյնշոչպջռսվտրցւփքօֆև։֊֍֎֏</div>
</div>
<div data-block="Hebrew">
<div class="line">־׀׃׆אבגדהוזחטיךכלםמןנסעףפץצקרשתװ</div>
<div class="line">ױײ׳״</div>
</div>
<div data-block="Arabic">
<div class="line">؆؇؈؉؊؋،؍؎؏؛؞؟ؠءآأؤإئابةتثجحخدذرز</div>
<div class="line">سشصضطظعغػؼؽؾؿـفقكلمنهوىي٠١٢٣٤٥٦٧</div>
<div class="line">٨٩٪٫٬٭ٮٯٱٲٳٴٵٶٷٸٹٺٻټٽپٿڀځڂڃڄڅچڇڈ</div>
<div class="line">ډڊڋڌڍڎڏڐڑڒړڔڕږڗژڙښڛڜڝڞڟڠڡڢڣڤڥڦڧڨ</div>
<div class="line">کڪګڬڭڮگڰڱڲڳڴڵڶڷڸڹںڻڼڽھڿۀہۂۃۄۅۆۇۈ</div>
<div class="line">ۉۊۋیۍێۏېۑےۓ۔ە۞ۥۦ۩ۮۯ۰۱۲۳۴۵۶۷۸۹ۺۻۼ</div>
<div class="line">۽۾ۿ</div>
</div>
<div data-block="Syriac">
<div class="line">܀܁܂܃܄܅܆܇܈܉܊܋܌܍ܐܒܓܔܕܖܗܘܙܚܛܜܝܞܟܠܡܢ</div>
<div class="line">ܣܤܥܦܧܨܩܪܫܬܭܮܯݍݎݏ</div>
</div>
<div data-block="Arabic">
<div class="line">ݐݑݒݓݔݕݖݗݘݙݚݛݜݝݞݟݠݡݢݣݤݥݦݧݨݩݪݫݬݭݮݯ</div>
<div class="line">ݰݱݲݳݴݵݶݷݸݹݺݻݼݽݾݿ</div>
</div>
<div data-block="Thaana">
<div class="line">ހށނރބޅކއވމފދތލގޏސޑޒޓޔޕޖޗޘޙޚޛޜޝޞޟ</div>
<div class="line">ޠޡޢޣޤޥޱ</div>
</div>
<div data-block="NKo">
<div class="line">߀߁߂߃߄߅߆߇߈߉ߊߋߌߍߎߏߐߑߒߓߔߕߖߗߘߙߚߛߜߝߞߟ</div>
<div class="line">ߠߡߢߣߤߥߦߧߨߩߪߴߵ߶߷߸߹ߺ</div>
</div>
<div data-block="Samaritan">
<div class="line">ࠀࠁࠂࠃࠄࠅࠆࠇࠈࠉࠊࠋࠌࠍࠎࠏࠐࠑࠒࠓࠔࠕࠚࠤࠨ࠰࠱࠲࠳࠴࠵࠶</div>
<div class="line">࠷࠸࠹࠺࠻࠼࠽࠾</div>
</div>
<div data-block="Mandaic">
<div class="line">ࡀࡁࡂࡃࡄࡅࡆࡇࡈࡉࡊࡋࡌࡍࡎࡏࡐࡑࡒࡓࡔࡕࡖࡗࡘ࡞</div>
</div>
<div data-block="Arabic">
<div class="line">ࢠࢡࢢࢣࢤࢥࢦࢧࢨࢩࢪࢫࢬࢭࢮࢯࢰࢱࢲ</div>
</div>
<div data-block="Devanagari">
<div class="line">ऄअआइईउऊऋऌऍऎएऐऑऒओऔकखगघङचछजझञटठडढण</div>
<div class="line">तथदधनऩपफबभमयरऱलळऴवशषसहऽॐक़ख़ग़ज़ड़ढ़फ़य़</div>
<div class="line">ॠॡ।॥०१२३४५६७८९॰ॱॲॳॴॵॶॷॸॹॺॻॼॽॾॿ</div>
</div>
<div data-block="Bengali">
<div class="line">ঀঅআইঈউঊঋঌএঐওঔকখগঘঙচছজঝঞটঠডঢণতথদধ</div>
<div class="line">নপফবভমযরলশষসহঽৎড়ঢ়য়ৠৡ০১২৩৪৫৬৭৮৯ৰৱ</div>
<div class="line">৲৳৴৵৶৷৸৹৺৻</div>
</div>
<div data-block="Gurmukhi">
<div class="line">ਅਆਇਈਉਊਏਐਓਔਕਖਗਘਙਚਛਜਝਞਟਠਡਢਣਤਥਦਧਨਪਫ</div>
<div class="line">ਬਭਮਯਰਲਲ਼ਵਸ਼ਸਹਖ਼ਗ਼ਜ਼ੜਫ਼੦੧੨੩੪੫੬੭੮੯ੲੳੴ</div>
</div>
<div data-block="Gujarati">
<div class="line">અઆઇઈઉઊઋઌઍએઐઑઓઔકખગઘઙચછજઝઞટઠડઢણતથદ</div>
<div class="line">ધનપફબભમયરલળવશષસહઽૐૠૡ૦૧૨૩૪૫૬૭૮૯૰૱</div>
</div>
<div data-block="Oriya">
<div class="line">ଅଆଇଈଉଊଋଌଏଐଓଔକଖଗଘଙଚଛଜଝଞଟଠଡଢଣତଥଦଧନ</div>
<div class="line">ପଫବଭମଯରଲଳଵଶଷସହଽଡ଼ଢ଼ୟୠୡ୦୧୨୩୪୫୬୭୮୯୰ୱ</div>
<div class="line">୲୳୴୵୶୷</div>
</div>
<div data-block="Tamil">
<div class="line">ஃஅஆஇஈஉஊஎஏஐஒஓஔகஙசஜஞடணதநனபமயரறலளழவ</div>
<div class="line">ஶஷஸஹௐ௦௧௨௩௪௫௬௭௮௯௰௱௲௳௴௵௶௷௸௹௺</div>
</div>
<div data-block="Telugu">
<div class="line">అఆఇఈఉఊఋఌఎఏఐఒఓఔకఖగఘఙచఛజఝఞటఠడఢణతథద</div>
<div class="line">ధనపఫబభమయరఱలళఴవశషసహఽౘౙౠౡ౦౧౨౩౪౫౬౭౮</div>
<div class="line">౯౸౹౺౻౼౽౾౿</div>
</div>
<div data-block="Kannada">
<div class="line">ಅಆಇಈಉಊಋಌಎಏಐಒಓಔಕಖಗಘಙಚಛಜಝಞಟಠಡಢಣತಥದ</div>
<div class="line">ಧನಪಫಬಭಮಯರಱಲಳವಶಷಸಹಽೞೠೡ೦೧೨೩೪೫೬೭೮೯ೱ</div>
<div class="line">ೲ</div>
</div>
<div data-block="Malayalam">
<div class="line">അആഇഈഉഊഋഌഎഏഐഒഓഔകഖഗഘങചഛജഝഞടഠഡഢണതഥദ</div>
<div class="line">ധനഩപഫബഭമയരറലളഴവശഷസഹഺഽൎൠൡ൦൧൨൩൪൫൬൭</div>
<div class="line">൮൯൰൱൲൳൴൵൹ൺൻർൽൾൿ</div>
</div>
<div data-block="Sinhala">
<div class="line">අආඇඈඉඊඋඌඍඎඏඐඑඒඓඔඕඖකඛගඝඞඟචඡජඣඤඥඦට</div>
<div class="line">ඨඩඪණඬතථදධනඳපඵබභමඹයරලවශෂසහළෆ෦෧෨෩෪</div>
<div class="line">෫෬෭෮෯෴</div>
</div>
<div data-block="Thai">
<div class="line">กขฃคฅฆงจฉชซฌญฎฏฐฑฒณดตถทธนบปผฝพฟภ</div>
<div class="line">มยรฤลฦวศษสหฬอฮฯะา฿เแโใไๅๆ๏๐๑๒๓๔๕</div>
<div class="line">๖๗๘๙๚๛</div>
</div>
<div data-block="Lao">
<div class="line">ກຂຄງຈຊຍດຕຖທນບປຜຝພຟມຢຣລວສຫອຮຯະາຽເ</div>
<div class="line">ແໂໃໄໆ໐໑໒໓໔໕໖໗໘໙ໜໝໞໟ</div>
</div>
<div data-block="Tibetan">
<div class="line">ༀ༁༂༃༄༅༆༇༈༉༊་༌།༎༏༐༑༒༓༔༕༖༗༚༛༜༝༞༟༠༡</div>
<div class="line">༢༣༤༥༦༧༨༩༪༫༬༭༮༯༰༱༲༳༴༶༸༺༻༼༽ཀཁགགྷངཅཆ</div>
<div class="line">ཇཉཊཋཌཌྷཎཏཐདདྷནཔཕབབྷམཙཚཛཛྷཝཞཟའཡརལཤཥསཧ</div>
<div class="line">ཨཀྵཪཫཬ྅ྈྉྊྋྌ྾྿࿀࿁࿂࿃࿄࿅࿇࿈࿉࿊࿋࿌࿎࿏࿐࿑࿒࿓࿔</div>
<div class="line">࿕࿖࿗࿘࿙࿚</div>
</div>
<div data-block="Myanmar">
<div class="line">ကခဂဃငစဆဇဈဉညဋဌဍဎဏတထဒဓနပဖဗဘမယရလဝသဟ</div>
<div class="line">ဠအဢဣဤဥဦဧဨဩဪဿ၀၁၂၃၄၅၆၇၈၉၊။၌၍၎၏ၐၑၒၓ</div>
<div class="line">ၔၕၚၛၜၝၡၥၦၮၯၰၵၶၷၸၹၺၻၼၽၾၿႀႁႎ႐႑႒႓႔႕</div>
<div class="line">႖႗႘႙႞႟</div>
</div>
<div data-block="Georgian">
<div class="line">ႠႡႢႣႤႥႦႧႨႩႪႫႬႭႮႯႰႱႲႳႴႵႶႷႸႹႺႻႼႽႾႿ</div>
<div class="line">ჀჁჂჃჄჅჇჍაბგდევზთიკლმნოპჟრსტუფქღყ</div>
<div class="line">შჩცძწჭხჯჰჱჲჳჴჵჶჷჸჹჺ჻ჼჽჾჿ</div>
</div>
<div data-block="Ethiopic">
<div class="line">ሀሁሂሃሄህሆሇለሉሊላሌልሎሏሐሑሒሓሔሕሖሗመሙሚማሜምሞሟ</div>
<div class="line">ሠሡሢሣሤሥሦሧረሩሪራሬርሮሯሰሱሲሳሴስሶሷሸሹሺሻሼሽሾሿ</div>
<div class="line">ቀቁቂቃቄቅቆቇቈቊቋቌቍቐቑቒቓቔቕቖቘቚቛቜቝበቡቢባቤብቦ</div>
<div class="line">ቧቨቩቪቫቬቭቮቯተቱቲታቴትቶቷቸቹቺቻቼችቾቿኀኁኂኃኄኅኆ</div>
<div class="line">ኇኈኊኋኌኍነኑኒናኔንኖኗኘኙኚኛኜኝኞኟአኡኢኣኤእኦኧከኩ</div>
<div class="line">ኪካኬክኮኯኰኲኳኴኵኸኹኺኻኼኽኾዀዂዃዄዅወዉዊዋዌውዎዏዐ</div>
<div class="line">ዑዒዓዔዕዖዘዙዚዛዜዝዞዟዠዡዢዣዤዥዦዧየዩዪያዬይዮዯደዱ</div>
<div class="line">ዲዳዴድዶዷዸዹዺዻዼዽዾዿጀጁጂጃጄጅጆጇገጉጊጋጌግጎጏጐጒ</div>
<div class="line">ጓጔጕጘጙጚጛጜጝጞጟጠጡጢጣጤጥጦጧጨጩጪጫጬጭጮጯጰጱጲጳጴ</div>
<div class="line">ጵጶጷጸጹጺጻጼጽጾጿፀፁፂፃፄፅፆፇፈፉፊፋፌፍፎፏፐፑፒፓፔ</div>
<div class="line">ፕፖፗፘፙፚ፠፡።፣፤፥፦፧፨፩፪፫፬፭፮፯፰፱፲፳፴፵፶፷፸፹</div>
<div class="line">፺፻፼ᎀᎁᎂᎃᎄᎅᎆᎇᎈᎉᎊᎋᎌᎍᎎᎏ᎐᎑᎒᎓᎔᎕᎖᎗᎘᎙</div>
</div>
<div data-block="Cherokee">
<div class="line">ᎠᎡᎢᎣᎤᎥᎦᎧᎨᎩᎪᎫᎬᎭᎮᎯᎰᎱᎲᎳᎴᎵᎶᎷᎸᎹᎺᎻᎼᎽᎾᎿ</div>
<div class="line">ᏀᏁᏂᏃᏄᏅᏆᏇᏈᏉᏊᏋᏌᏍᏎᏏᏐᏑᏒᏓᏔᏕᏖᏗᏘᏙᏚᏛᏜᏝᏞᏟ</div>
<div class="line">ᏠᏡᏢᏣᏤᏥᏦᏧᏨᏩᏪᏫᏬᏭᏮᏯᏰᏱᏲᏳᏴ</div>
</div>
<div data-block="Unified">
<div class="line">᐀</div>
</div>
<div data-block="Ogham">
<div class="line"> ᚁᚂᚃᚄᚅᚆᚇᚈᚉᚊᚋᚌᚍᚎᚏᚐᚑᚒᚓᚔᚕᚖᚗᚘᚙᚚ᚛᚜</div>
</div>
<div data-block="Runic">
<div class="line">ᚠᚡᚢᚣᚤᚥᚦᚧᚨᚩᚪᚫᚬᚭᚮᚯᚰᚱᚲᚳᚴᚵᚶᚷᚸᚹᚺᚻᚼᚽᚾᚿ</div>
<div class="line">ᛀᛁᛂᛃᛄᛅᛆᛇᛈᛉᛊᛋᛌᛍᛎᛏᛐᛑᛒᛓᛔᛕᛖᛗᛘᛙᛚᛛᛜᛝᛞᛟ</div>
<div class="line">ᛠᛡᛢᛣᛤᛥᛦᛧᛨᛩᛪ᛫᛬᛭ᛮᛯᛰᛱᛲᛳᛴᛵᛶᛷᛸ</div>
</div>
<div data-block="Tagalog">
<div class="line">ᜀᜁᜂᜃᜄᜅᜆᜇᜈᜉᜊᜋᜌᜎᜏᜐᜑ</div>
</div>
<div data-block="Hanunoo">
<div class="line">ᜠᜡᜢᜣᜤᜥᜦᜧᜨᜩᜪᜫᜬᜭᜮᜯᜰᜱ᜵᜶</div>
</div>
<div data-block="Buhid">
<div class="line">ᝀᝁᝂᝃᝄᝅᝆᝇᝈᝉᝊᝋᝌᝍᝎᝏᝐᝑ</div>
</div>
<div data-block="Tagbanwa">
<div class="line">ᝠᝡᝢᝣᝤᝥᝦᝧᝨᝩᝪᝫᝬᝮᝯᝰ</div>
</div>
<div data-block="Khmer">
<div class="line">កខគឃងចឆជឈញដឋឌឍណតថទធនបផពភមយរលវឝឞស</div>
<div class="line">ហឡអឣឤឥឦឧឨឩឪឫឬឭឮឯឰឱឲឳ។៕៖ៗ៘៙៚៛ៜ០១២</div>
<div class="line">៣៤៥៦៧៨៩៰៱៲៳៴៵៶៷៸៹</div>
</div>
<div data-block="Mongolian">
<div class="line">᠀᠁᠂᠃᠄᠅᠆᠇᠈᠉᠊᠐᠑᠒᠓᠔᠕᠖᠗᠘᠙ᠠᠡᠢᠣᠤᠥᠦᠧᠨᠩᠪ</div>
<div class="line">ᠫᠬᠭᠮᠯᠰᠱᠲᠳᠴᠵᠶᠷᠸᠹᠺᠻᠼᠽᠾᠿᡀᡁᡂᡃᡄᡅᡆᡇᡈᡉᡊ</div>
<div class="line">ᡋᡌᡍᡎᡏᡐᡑᡒᡓᡔᡕᡖᡗᡘᡙᡚᡛᡜᡝᡞᡟᡠᡡᡢᡣᡤᡥᡦᡧᡨᡩᡪ</div>
<div class="line">ᡫᡬᡭᡮᡯᡰᡱᡲᡳᡴᡵᡶᡷᢀᢁᢂᢃᢄᢅᢆᢇᢈᢉᢊᢋᢌᢍᢎᢏᢐᢑᢒ</div>
<div class="line">ᢓᢔᢕᢖᢗᢘᢙᢚᢛᢜᢝᢞᢟᢠᢡᢢᢣᢤᢥᢦᢧᢨᢪ</div>
</div>
<div data-block="Limbu">
<div class="line">ᤀᤁᤂᤃᤄᤅᤆᤇᤈᤉᤊᤋᤌᤍᤎᤏᤐᤑᤒᤓᤔᤕᤖᤗᤘᤙᤚᤛᤜᤝᤞ᥀</div>
<div class="line">᥄᥅᥆᥇᥈᥉᥊᥋᥌᥍᥎᥏</div>
</div>
<div data-block="Tai">
<div class="line">ᥐᥑᥒᥓᥔᥕᥖᥗᥘᥙᥚᥛᥜᥝᥞᥟᥠᥡᥢᥣᥤᥥᥦᥧᥨᥩᥪᥫᥬᥭᥰᥱ</div>
<div class="line">ᥲᥳᥴ</div>
</div>
<div data-block="New">
<div class="line">ᦀᦁᦂᦃᦄᦅᦆᦇᦈᦉᦊᦋᦌᦍᦎᦏᦐᦑᦒᦓᦔᦕᦖᦗᦘᦙᦚᦛᦜᦝᦞᦟ</div>
<div class="line">ᦠᦡᦢᦣᦤᦥᦦᦧᦨᦩᦪᦫᧁᧂᧃᧄᧅᧆᧇ᧐᧑᧒᧓᧔᧕᧖᧗᧘᧙᧚᧞᧟</div>
</div>
<div data-block="Khmer">
<div class="line">᧠᧡᧢᧣᧤᧥᧦᧧᧨᧩᧪᧫᧬᧭᧮᧯᧰᧱᧲᧳᧴᧵᧶᧷᧸᧹᧺᧻᧼᧽᧾᧿</div>
</div>
<div data-block="Buginese">
<div class="line">ᨀᨁᨂᨃᨄᨅᨆᨇᨈᨉᨊᨋᨌᨍᨎᨏᨐᨑᨒᨓᨔᨕᨖ᨞᨟</div>
</div>
<div data-block="Tai">
<div class="line">ᨠᨡᨢᨣᨤᨥᨦᨧᨨᨩᨪᨫᨬᨭᨮᨯᨰᨱᨲᨳᨴᨵᨶᨷᨸᨹᨺᨻᨼᨽᨾᨿ</div>
<div class="line">ᩀᩁᩂᩃᩄᩅᩆᩇᩈᩉᩊᩋᩌᩍᩎᩏᩐᩑᩒᩓᩔ᪀᪁᪂᪃᪄᪅᪆᪇᪈᪉᪐</div>
<div class="line">᪑᪒᪓᪔᪕᪖᪗᪘᪙᪠᪡᪢᪣᪤᪥᪦ᪧ᪨᪩᪪᪫᪬᪭</div>
</div>
<div data-block="Balinese">
<div class="line">ᬅᬆᬇᬈᬉᬊᬋᬌᬍᬎᬏᬐᬑᬒᬓᬔᬕᬖᬗᬘᬙᬚᬛᬜᬝᬞᬟᬠᬡᬢᬣᬤ</div>
<div class="line">ᬥᬦᬧᬨᬩᬪᬫᬬᬭᬮᬯᬰᬱᬲᬳᭅᭆᭇᭈᭉᭊᭋ᭐᭑᭒᭓᭔᭕᭖᭗᭘᭙</div>
<div class="line">᭚᭛᭜᭝᭞᭟᭠᭡᭢᭣᭤᭥᭦᭧᭨᭩᭪᭴᭵᭶᭷᭸᭹᭺᭻᭼</div>
</div>
<div data-block="Sundanese">
<div class="line">ᮃᮄᮅᮆᮇᮈᮉᮊᮋᮌᮍᮎᮏᮐᮑᮒᮓᮔᮕᮖᮗᮘᮙᮚᮛᮜᮝᮞᮟᮠᮮᮯ</div>
<div class="line">᮰᮱᮲᮳᮴᮵᮶᮷᮸᮹ᮺᮻᮼᮽᮾᮿ</div>
</div>
<div data-block="Batak">
<div class="line">ᯀᯁᯂᯃᯄᯅᯆᯇᯈᯉᯊᯋᯌᯍᯎᯏᯐᯑᯒᯓᯔᯕᯖᯗᯘᯙᯚᯛᯜᯝᯞᯟ</div>
<div class="line">ᯠᯡᯢᯣᯤᯥ᯼᯽᯾᯿</div>
</div>
<div data-block="Lepcha">
<div class="line">ᰀᰁᰂᰃᰄᰅᰆᰇᰈᰉᰊᰋᰌᰍᰎᰏᰐᰑᰒᰓᰔᰕᰖᰗᰘᰙᰚᰛᰜᰝᰞᰟ</div>
<div class="line">ᰠᰡᰢᰣ᰻᰼᰽᰾᰿᱀᱁᱂᱃᱄᱅᱆᱇᱈᱉ᱍᱎᱏ</div>
</div>
<div data-block="Ol">
<div class="line">᱐᱑᱒᱓᱔᱕᱖᱗᱘᱙ᱚᱛᱜᱝᱞᱟᱠᱡᱢᱣᱤᱥᱦᱧᱨᱩᱪᱫᱬᱭᱮᱯ</div>
<div class="line">ᱰᱱᱲᱳᱴᱵᱶᱷᱸᱹᱺᱻᱼᱽ᱾᱿</div>
</div>
<div data-block="Sundanese">
<div class="line">᳀᳁᳂᳃᳄᳅᳆᳇</div>
</div>
<div data-block="Vedic">
<div class="line">᳓ᳩᳪᳫᳬᳮᳯᳰᳱᳵᳶ</div>
</div>
<div data-block="Phonetic">
<div class="line">ᴀᴁᴂᴃᴄᴅᴆᴇᴈᴉᴊᴋᴌᴍᴎᴏᴐᴑᴒᴓᴔᴕᴖᴗᴘᴙᴚᴛᴜᴝᴞᴟ</div>
<div class="line">ᴠᴡᴢᴣᴤᴥᴦᴧᴨᴩᴪᴫᴬᴭᴮᴯᴰᴱᴲᴳᴴᴵᴶᴷᴸᴹᴺᴻᴼᴽᴾᴿ</div>
<div class="line">ᵀᵁᵂᵃᵄᵅᵆᵇᵈᵉᵊᵋᵌᵍᵎᵏᵐᵑᵒᵓᵔᵕᵖᵗᵘᵙᵚᵛᵜᵝᵞᵟ</div>
<div class="line">ᵠᵡᵢᵣᵤᵥᵦᵧᵨᵩᵪᵫᵬᵭᵮᵯᵰᵱᵲᵳᵴᵵᵶᵷᵸᵹᵺᵻᵼᵽᵾᵿ</div>
<div class="line">ᶀᶁᶂᶃᶄᶅᶆᶇᶈᶉᶊᶋᶌᶍᶎᶏᶐᶑᶒᶓᶔᶕᶖᶗᶘᶙᶚᶛᶜᶝᶞᶟ</div>
<div class="line">ᶠᶡᶢᶣᶤᶥᶦᶧᶨᶩᶪᶫᶬᶭᶮᶯᶰᶱᶲᶳᶴᶵᶶᶷᶸᶹᶺᶻᶼᶽᶾᶿ</div>
</div>
<div data-block="Latin">
<div class="line">ḀḁḂḃḄḅḆḇḈḉḊḋḌḍḎḏḐḑḒḓḔḕḖḗḘḙḚḛḜḝḞḟ</div>
<div class="line">ḠḡḢḣḤḥḦḧḨḩḪḫḬḭḮḯḰḱḲḳḴḵḶḷḸḹḺḻḼḽḾḿ</div>
<div class="line">ṀṁṂṃṄṅṆṇṈṉṊṋṌṍṎṏṐṑṒṓṔṕṖṗṘṙṚṛṜṝṞṟ</div>
<div class="line">ṠṡṢṣṤṥṦṧṨṩṪṫṬṭṮṯṰṱṲṳṴṵṶṷṸṹṺṻṼṽṾṿ</div>
<div class="line">ẀẁẂẃẄẅẆẇẈẉẊẋẌẍẎẏẐẑẒẓẔẕẖẗẘẙẚẛẜẝẞẟ</div>
<div class="line">ẠạẢảẤấẦầẨẩẪẫẬậẮắẰằẲẳẴẵẶặẸẹẺẻẼẽẾế</div>
<div class="line">ỀềỂểỄễỆệỈỉỊịỌọỎỏỐốỒồỔổỖỗỘộỚớỜờỞở</div>
<div class="line">ỠỡỢợỤụỦủỨứỪừỬửỮữỰựỲỳỴỵỶỷỸỹỺỻỼỽỾỿ</div>
</div>
<div data-block="Greek">
<div class="line">ἀἁἂἃἄἅἆἇἈἉἊἋἌἍἎἏἐἑἒἓἔἕἘἙἚἛἜἝἠἡἢἣ</div>
<div class="line">ἤἥἦἧἨἩἪἫἬἭἮἯἰἱἲἳἴἵἶἷἸἹἺἻἼἽἾἿὀὁὂὃ</div>
<div class="line">ὄὅὈὉὊὋὌὍὐὑὒὓὔὕὖὗὙὛὝὟὠὡὢὣὤὥὦὧὨὩὪὫ</div>
<div class="line">ὬὭὮὯὰάὲέὴήὶίὸόὺύὼώᾀᾁᾂᾃᾄᾅᾆᾇᾈᾉᾊᾋᾌᾍ</div>
<div class="line">ᾎᾏᾐᾑᾒᾓᾔᾕᾖᾗᾘᾙᾚᾛᾜᾝᾞᾟᾠᾡᾢᾣᾤᾥᾦᾧᾨᾩᾪᾫᾬᾭ</div>
<div class="line">ᾮᾯᾰᾱᾲᾳᾴᾶᾷᾸᾹᾺΆᾼ᾽ι᾿῀῁ῂῃῄῆῇῈΈῊΉῌ῍῎῏</div>
<div class="line">ῐῑῒΐῖῗῘῙῚΊ῝῞῟ῠῡῢΰῤῥῦῧῨῩῪΎῬ῭΅`ῲῳῴ</div>
<div class="line">ῶῷῸΌῺΏῼ´῾</div>
</div>
<div data-block="General">
<div class="line">           ‐‑‒–—―‗‘’‚‛“”„‟•‣․‥…‧</div>
<div class="line">   ′″‴‵‶‷‸‹›‽‾‿⁀⁁⁃⁄⁅⁆⁊⁋⁌⁍⁎⁏⁐⁒⁓⁔⁕</div>
<div class="line">⁖⁗⁘⁙⁚⁛⁜⁝⁞ </div>
</div>
<div data-block="Superscripts">
<div class="line">⁰ⁱ⁴⁵⁶⁷⁸⁹⁺⁻⁼⁽⁾ⁿ₀₁₂₃₄₅₆₇₈₉₊₋₌₍₎ₐₑₒ</div>
<div class="line">ₓₔₕₖₗₘₙₚₛₜ</div>
</div>
<div data-block="Currency">
<div class="line">₠₡₢₣₤₥₦₧₨₩₪₫€₭₮₯₰₱₲₳₴₵₶₷₸₹₺₻₼₽</div>
</div>
<div data-block="Letterlike">
<div class="line">ℂℊℋℌℍℎℐℑℒℕ℘ℙℚℛℜℝℤΩℨKÅℬℭℯℰℱℲℳℴ⅀⅁⅂</div>
<div class="line">⅃⅄⅋ⅎ</div>
</div>
<div data-block="Arrows">
<div class="line">←↑→↓↔↕↖↗↘↙↚↛↜↝↞↟↠↡↢↣↤↥↦↧↨↩↪↫↬↭↮↯</div>
<div class="line">↰↱↲↳↴↵↶↷↸↹↺↻↼↽↾↿⇀⇁⇂⇃⇄⇅⇆⇇⇈⇉⇊⇋⇌⇍⇎⇏</div>
<div class="line">⇐⇑⇒⇓⇔⇕⇖⇗⇘⇙⇚⇛⇜⇝⇞⇟⇠⇡⇢⇣⇤⇥⇦⇧⇨⇩⇪⇫⇬⇭⇮⇯</div>
<div class="line">⇰⇱⇲⇳⇴⇵⇶⇷⇸⇹⇺⇻⇼⇽⇾⇿</div>
</div>
<div data-block="Mathematical">
<div class="line">∀∁∂∃∄∅∆∇∈∉∊∋∌∍∎∏∐∑−∓∔∕∖∗∘∙√∛∜∝∟∠</div>
<div class="line">∡∢∣∤∥∦∧∨∩∪∫∬∭∮∯∰∱∲∳∶∷∸∹∺∻∼∽∾∿≀≁≂</div>
<div class="line">≃≄≅≆≇≈≉≊≋≌≍≎≏≐≑≒≓≔≕≖≗≘≙≚≛≜≝≞≟≠≡≢</div>
<div class="line">≣≤≥≦≧≨≩≪≫≬≭≮≯≰≱≲≳≴≵≶≷≸≹≺≻≼≽≾≿⊀⊁⊂</div>
<div class="line">⊃⊄⊅⊆⊇⊈⊉⊊⊋⊌⊍⊎⊏⊐⊑⊒⊓⊔⊕⊖⊗⊘⊙⊚⊛⊜⊝⊞⊟⊠⊡⊢</div>
<div class="line">⊣⊤⊥⊦⊧⊨⊩⊪⊫⊬⊭⊮⊯⊰⊱⊲⊳⊴⊵⊶⊷⊸⊹⊺⊻⊼⊽⊾⊿⋀⋁⋂</div>
<div class="line">⋃⋄⋅⋆⋇⋈⋉⋊⋋⋌⋍⋎⋏⋐⋑⋒⋓⋔⋕⋖⋗⋘⋙⋚⋛⋜⋝⋞⋟⋠⋡⋢</div>
<div class="line">⋣⋤⋥⋦⋧⋨⋩⋪⋫⋬⋭⋮⋯⋰⋱⋲⋳⋴⋵⋶⋷⋸⋹⋺⋻⋼⋽⋾⋿</div>
</div>
<div data-block="Miscellaneous">
<div class="line">⌈⌉⌊⌋⌠⌡⌢⌣⌬⌭⌮⌯⌰⌱⌲⌳⌴⌵⌶⌷⌸⌹⌺⌻⌼⌽⌾⌿⍀⍁⍂⍃</div>
<div class="line">⍄⍅⍆⍇⍈⍉⍊⍋⍌⍍⍎⍏⍐⍑⍒⍓⍔⍕⍖⍗⍘⍙⍚⍛⍜⍝⍞⍟⍠⍡⍢⍣</div>
<div class="line">⍤⍥⍦⍧⍨⍩⍪⍫⍬⍭⍮⍯⍰⍱⍲⍳⍴⍵⍶⍷⍸⍹⍺⍻⍼⎛⎜⎝⎞⎟⎠⎡</div>
<div class="line">⎢⎣⎤⎥⎦⎧⎨⎩⎪⎫⎬⎭⎮⎯⎰⎱⎲⎳⎴⎵⎶⎷⎸⎹⎺⎻⎼⎽⏎⏐⏜⏝</div>
<div class="line">⏞⏟⏠⏡</div>
</div>
<div data-block="Control">
<div class="line">␣</div>
</div>
<div data-block="Box">
<div class="line">─━│┃┄┅┆┇┈┉┊┋┌┍┎┏┐┑┒┓└┕┖┗┘┙┚┛├┝┞┟</div>
<div class="line">┠┡┢┣┤┥┦┧┨┩┪┫┬┭┮┯┰┱┲┳┴┵┶┷┸┹┺┻┼┽┾┿</div>
<div class="line">╀╁╂╃╄╅╆╇╈╉╊╋╌╍╎╏═║╒╓╔╕╖╗╘╙╚╛╜╝╞╟</div>
<div class="line">╠╡╢╣╤╥╦╧╨╩╪╫╬╭╮╯╰╱╲╳╴╵╶╷╸╹╺╻╼╽╾╿</div>
</div>
<div data-block="Block">
<div class="line">▀▁▂▃▄▅▆▇█▉▊▋▌▍▎▏▐░▒▓▔▕▖▗▘▙▚▛▜▝▞▟</div>
</div>
<div data-block="Miscellaneous">
<div class="line">☚☛☜☝☞☟</div>
</div>
<div data-block="Dingbats">
<div class="line">❨❩❪❫❬❭❮❯❰❱❲❳❴❵➔➕➖➗➘➙➚➛➜➝➞➟➠➡➢➣➤➥</div>
<div class="line">➦➧➨➩➪➫➬➭➮➯➰➱➲➳➴➵➶➷➸➹➺➻➼➽➾➿</div>
</div>
<div data-block="Miscellaneous">
<div class="line">⟀⟁⟂⟃⟄⟅⟆⟇⟈⟉⟊⟋⟌⟍⟎⟏⟐⟑⟒⟓⟔⟕⟖⟗⟘⟙⟚⟛⟜⟝⟞⟟</div>
<div class="line">⟠⟡⟢⟣⟤⟥⟦⟧⟨⟩⟪⟫⟬⟭⟮⟯</div>
</div>
<div data-block="Supplemental">
<div class="line">⟰⟱⟲⟳⟴⟵⟶⟷⟸⟹⟺⟻⟼⟽⟾⟿</div>
</div>
<div data-block="Braille">
<div class="line">⠀⠁⠂⠃⠄⠅⠆⠇⠈⠉⠊⠋⠌⠍⠎⠏⠐⠑⠒⠓⠔⠕⠖⠗⠘⠙⠚⠛⠜⠝⠞⠟</div>
<div class="line">⠠⠡⠢⠣⠤⠥⠦⠧⠨⠩⠪⠫⠬⠭⠮⠯⠰⠱⠲⠳⠴⠵⠶⠷⠸⠹⠺⠻⠼⠽⠾⠿</div>
<div class="line">⡀⡁⡂⡃⡄⡅⡆⡇⡈⡉⡊⡋⡌⡍⡎⡏⡐⡑⡒⡓⡔⡕⡖⡗⡘⡙⡚⡛⡜⡝⡞⡟</div>
<div class="line">⡠⡡⡢⡣⡤⡥⡦⡧⡨⡩⡪⡫⡬⡭⡮⡯⡰⡱⡲⡳⡴⡵⡶⡷⡸⡹⡺⡻⡼⡽⡾⡿</div>
<div class="line">⢀⢁⢂⢃⢄⢅⢆⢇⢈⢉⢊⢋⢌⢍⢎⢏⢐⢑⢒⢓⢔⢕⢖⢗⢘⢙⢚⢛⢜⢝⢞⢟</div>
<div class="line">⢠⢡⢢⢣⢤⢥⢦⢧⢨⢩⢪⢫⢬⢭⢮⢯⢰⢱⢲⢳⢴⢵⢶⢷⢸⢹⢺⢻⢼⢽⢾⢿</div>
<div class="line">⣀⣁⣂⣃⣄⣅⣆⣇⣈⣉⣊⣋⣌⣍⣎⣏⣐⣑⣒⣓⣔⣕⣖⣗⣘⣙⣚⣛⣜⣝⣞⣟</div>
<div class="line">⣠⣡⣢⣣⣤⣥⣦⣧⣨⣩⣪⣫⣬⣭⣮⣯⣰⣱⣲⣳⣴⣵⣶⣷⣸⣹⣺⣻⣼⣽⣾⣿</div>
</div>
<div data-block="Supplemental">
<div class="line">⤀⤁⤂⤃⤄⤅⤆⤇⤈⤉⤊⤋⤌⤍⤎⤏⤐⤑⤒⤓⤔⤕⤖⤗⤘⤙⤚⤛⤜⤝⤞⤟</div>
<div class="line">⤠⤡⤢⤣⤤⤥⤦⤧⤨⤩⤪⤫⤬⤭⤮⤯⤰⤱⤲⤳⤴⤵⤶⤷⤸⤹⤺⤻⤼⤽⤾⤿</div>
<div class="line">⥀⥁⥂⥃⥄⥅⥆⥇⥈⥉⥊⥋⥌⥍⥎⥏⥐⥑⥒⥓⥔⥕⥖⥗⥘⥙⥚⥛⥜⥝⥞⥟</div>
<div class="line">⥠⥡⥢⥣⥤⥥⥦⥧⥨⥩⥪⥫⥬⥭⥮⥯⥰⥱⥲⥳⥴⥵⥶⥷⥸⥹⥺⥻⥼⥽⥾⥿</div>
</div>
<div data-block="Miscellaneous">
<div class="line">⦀⦁⦂⦃⦄⦅⦆⦇⦈⦉⦊⦋⦌⦍⦎⦏⦐⦑⦒⦓⦔⦕⦖⦗⦘⦙⦚⦛⦜⦝⦞⦟</div>
<div class="line">⦠⦡⦢⦣⦤⦥⦦⦧⦨⦩⦪⦫⦬⦭⦮⦯⦰⦱⦲⦳⦴⦵⦶⦷⦸⦹⦺⦻⦼⦽⦾⦿</div>
<div class="line">⧀⧁⧂⧃⧄⧅⧆⧇⧈⧉⧊⧋⧌⧍⧎⧏⧐⧑⧒⧓⧔⧕⧖⧗⧘⧙⧚⧛⧜⧝⧞⧟</div>
<div class="line">⧠⧡⧢⧣⧤⧥⧦⧧⧨⧩⧪⧫⧬⧭⧮⧯⧰⧱⧲⧳⧴⧵⧶⧷⧸⧹⧺⧻⧼⧽⧾⧿</div>
</div>
<div data-block="Supplemental">
<div class="line">⨀⨁⨂⨃⨄⨅⨆⨇⨈⨉⨊⨋⨌⨍⨎⨏⨐⨑⨒⨓⨔⨕⨖⨗⨘⨙⨚⨛⨜⨝⨞⨟</div>
<div class="line">⨠⨡⨢⨣⨤⨥⨦⨧⨨⨩⨪⨫⨬⨭⨮⨯⨰⨱⨲⨳⨴⨵⨶⨷⨸⨹⨺⨻⨼⨽⨾⨿</div>
<div class="line">⩀⩁⩂⩃⩄⩅⩆⩇⩈⩉⩊⩋⩌⩍⩎⩏⩐⩑⩒⩓⩔⩕⩖⩗⩘⩙⩚⩛⩜⩝⩞⩟</div>
<div class="line">⩠⩡⩢⩣⩤⩥⩦⩧⩨⩩⩪⩫⩬⩭⩮⩯⩰⩱⩲⩳⩴⩵⩶⩷⩸⩹⩺⩻⩼⩽⩾⩿</div>
<div class="line">⪀⪁⪂⪃⪄⪅⪆⪇⪈⪉⪊⪋⪌⪍⪎⪏⪐⪑⪒⪓⪔⪕⪖⪗⪘⪙⪚⪛⪜⪝⪞⪟</div>
<div class="line">⪠⪡⪢⪣⪤⪥⪦⪧⪨⪩⪪⪫⪬⪭⪮⪯⪰⪱⪲⪳⪴⪵⪶⪷⪸⪹⪺⪻⪼⪽⪾⪿</div>
<div class="line">⫀⫁⫂⫃⫄⫅⫆⫇⫈⫉⫊⫋⫌⫍⫎⫏⫐⫑⫒⫓⫔⫕⫖⫗⫘⫙⫚⫛⫝̸⫝⫞⫟</div>
<div class="line">⫠⫡⫢⫣⫤⫥⫦⫧⫨⫩⫪⫫⫬⫭⫮⫯⫰⫱⫲⫳⫴⫵⫶⫷⫸⫹⫺⫻⫼⫽⫾⫿</div>
</div>
<div data-block="Miscellaneous">
<div class="line">⬀⬁⬂⬃⬄⬅⬆⬇⬈⬉⬊⬋⬌⬍⬎⬏⬐⬑⬰⬱⬲⬳⬴⬵⬶⬷⬸⬹⬺⬻⬼⬽</div>
<div class="line">⬾⬿⭀⭁⭂⭃⭄⭅⭆⭇⭈⭉⭊⭋⭌⭍⭎⭏⭚⭛⭜⭝⭞⭟⭠⭡⭢⭣⭤⭥⭦⭧</div>
<div class="line">⭨⭩⭪⭫⭬⭭⭮⭯⭰⭱⭲⭳⭶⭷⭸⭹⭺⭻⭼⭽⭾⭿⮀⮁⮂⮃⮄⮅⮆⮇⮈⮉</div>
<div class="line">⮊⮋⮌⮍⮎⮏⮐⮑⮒⮓⮔⮕⮘⮙⮚⮛⮜⮝⮞⮟⮠⮡⮢⮣⮤⮥⮦⮧⮨⮩⮪⮫</div>
<div class="line">⮬⮭⮮⮯⮰⮱⮲⮳⮴⮵⮶⮷</div>
</div>
<div data-block="Glagolitic">
<div class="line">ⰀⰁⰂⰃⰄⰅⰆⰇⰈⰉⰊⰋⰌⰍⰎⰏⰐⰑⰒⰓⰔⰕⰖⰗⰘⰙⰚⰛⰜⰝⰞⰟ</div>
<div class="line">ⰠⰡⰢⰣⰤⰥⰦⰧⰨⰩⰪⰫⰬⰭⰮⰰⰱⰲⰳⰴⰵⰶⰷⰸⰹⰺⰻⰼⰽⰾⰿⱀ</div>
<div class="line">ⱁⱂⱃⱄⱅⱆⱇⱈⱉⱊⱋⱌⱍⱎⱏⱐⱑⱒⱓⱔⱕⱖⱗⱘⱙⱚⱛⱜⱝⱞ</div>
</div>
<div data-block="Latin">
<div class="line">ⱠⱡⱢⱣⱤⱥⱦⱧⱨⱩⱪⱫⱬⱭⱮⱯⱰⱱⱲⱳⱴⱵⱶⱷⱸⱹⱺⱻⱼⱽⱾⱿ</div>
</div>
<div data-block="Coptic">
<div class="line">ⲀⲁⲂⲃⲄⲅⲆⲇⲈⲉⲊⲋⲌⲍⲎⲏⲐⲑⲒⲓⲔⲕⲖⲗⲘⲙⲚⲛⲜⲝⲞⲟ</div>
<div class="line">ⲠⲡⲢⲣⲤⲥⲦⲧⲨⲩⲪⲫⲬⲭⲮⲯⲰⲱⲲⲳⲴⲵⲶⲷⲸⲹⲺⲻⲼⲽⲾⲿ</div>
<div class="line">ⳀⳁⳂⳃⳄⳅⳆⳇⳈⳉⳊⳋⳌⳍⳎⳏⳐⳑⳒⳓⳔⳕⳖⳗⳘⳙⳚⳛⳜⳝⳞⳟ</div>
<div class="line">ⳠⳡⳢⳣⳤ⳥⳦⳧⳨⳩⳪ⳫⳬⳭⳮⳲⳳ⳹⳺⳻⳼⳽⳾⳿</div>
</div>
<div data-block="Georgian">
<div class="line">ⴀⴁⴂⴃⴄⴅⴆⴇⴈⴉⴊⴋⴌⴍⴎⴏⴐⴑⴒⴓⴔⴕⴖⴗⴘⴙⴚⴛⴜⴝⴞⴟ</div>
<div class="line">ⴠⴡⴢⴣⴤⴥⴧⴭ</div>
</div>
<div data-block="Tifinagh">
<div class="line">ⴰⴱⴲⴳⴴⴵⴶⴷⴸⴹⴺⴻⴼⴽⴾⴿⵀⵁⵂⵃⵄⵅⵆⵇⵈⵉⵊⵋⵌⵍⵎⵏ</div>
<div class="line">ⵐⵑⵒⵓⵔⵕⵖⵗⵘⵙⵚⵛⵜⵝⵞⵟⵠⵡⵢⵣⵤⵥⵦⵧⵯ⵰</div>
</div>
<div data-block="Ethiopic">
<div class="line">ⶀⶁⶂⶃⶄⶅⶆⶇⶈⶉⶊⶋⶌⶍⶎⶏⶐⶑⶒⶓⶔⶕⶖⶠⶡⶢⶣⶤⶥⶦⶨⶩ</div>
<div class="line">ⶪⶫⶬⶭⶮⶰⶱⶲⶳⶴⶵⶶⶸⶹⶺⶻⶼⶽⶾⷀⷁⷂⷃⷄⷅⷆⷈⷉⷊⷋⷌⷍ</div>
<div class="line">ⷎⷐⷑⷒⷓⷔⷕⷖⷘⷙⷚⷛⷜⷝⷞ</div>
</div>
<div data-block="Supplemental">
<div class="line">⸀⸁⸂⸃⸄⸅⸆⸇⸈⸉⸊⸋⸌⸍⸎⸏⸐⸑⸒⸓⸔⸕⸖⸗⸘⸙⸚⸛⸜⸝⸞⸟</div>
<div class="line">⸠⸡⸢⸣⸤⸥⸦⸧⸨⸩⸪⸫⸬⸭⸮ⸯ⸰⸱⸲⸳⸴⸵⸶⸷⸸⸹⸺⸻⸼⸽⸾⸿</div>
<div class="line">⹀⹁⹂</div>
</div>
<div data-block="Lisu">
<div class="line">ꓐꓑꓒꓓꓔꓕꓖꓗꓘꓙꓚꓛꓜꓝꓞꓟꓠꓡꓢꓣꓤꓥꓦꓧꓨꓩꓪꓫꓬꓭꓮꓯ</div>
<div class="line">ꓰꓱꓲꓳꓴꓵꓶꓷꓸꓹꓺꓻꓼꓽ꓾꓿</div>
</div>
<div data-block="Vai">
<div class="line">ꔀꔁꔂꔃꔄꔅꔆꔇꔈꔉꔊꔋꔌꔍꔎꔏꔐꔑꔒꔓꔔꔕꔖꔗꔘꔙꔚꔛꔜꔝꔞꔟ</div>
<div class="line">ꔠꔡꔢꔣꔤꔥꔦꔧꔨꔩꔪꔫꔬꔭꔮꔯꔰꔱꔲꔳꔴꔵꔶꔷꔸꔹꔺꔻꔼꔽꔾꔿ</div>
<div class="line">ꕀꕁꕂꕃꕄꕅꕆꕇꕈꕉꕊꕋꕌꕍꕎꕏꕐꕑꕒꕓꕔꕕꕖꕗꕘꕙꕚꕛꕜꕝꕞꕟ</div>
<div class="line">ꕠꕡꕢꕣꕤꕥꕦꕧꕨꕩꕪꕫꕬꕭꕮꕯꕰꕱꕲꕳꕴꕵꕶꕷꕸꕹꕺꕻꕼꕽꕾꕿ</div>
<div class="line">ꖀꖁꖂꖃꖄꖅꖆꖇꖈꖉꖊꖋꖌꖍꖎꖏꖐꖑꖒꖓꖔꖕꖖꖗꖘꖙꖚꖛꖜꖝꖞꖟ</div>
<div class="line">ꖠꖡꖢꖣꖤꖥꖦꖧꖨꖩꖪꖫꖬꖭꖮꖯꖰꖱꖲꖳꖴꖵꖶꖷꖸꖹꖺꖻꖼꖽꖾꖿ</div>
<div class="line">ꗀꗁꗂꗃꗄꗅꗆꗇꗈꗉꗊꗋꗌꗍꗎꗏꗐꗑꗒꗓꗔꗕꗖꗗꗘꗙꗚꗛꗜꗝꗞꗟ</div>
<div class="line">ꗠꗡꗢꗣꗤꗥꗦꗧꗨꗩꗪꗫꗬꗭꗮꗯꗰꗱꗲꗳꗴꗵꗶꗷꗸꗹꗺꗻꗼꗽꗾꗿ</div>
<div class="line">ꘀꘁꘂꘃꘄꘅꘆꘇꘈꘉꘊꘋꘌ꘍꘎꘏ꘐꘑꘒꘓꘔꘕꘖꘗꘘꘙꘚꘛꘜꘝꘞꘟ</div>
<div class="line">꘠꘡꘢꘣꘤꘥꘦꘧꘨꘩ꘪꘫ</div>
</div>
<div data-block="Cyrillic">
<div class="line">ꙀꙁꙂꙃꙄꙅꙆꙇꙈꙉꙊꙋꙌꙍꙎꙏꙐꙑꙒꙓꙔꙕꙖꙗꙘꙙꙚꙛꙜꙝꙞꙟ</div>
<div class="line">ꙠꙡꙢꙣꙤꙥꙦꙧꙨꙩꙪꙫꙬꙭꙮ꙳꙾ꙿꚀꚁꚂꚃꚄꚅꚆꚇꚈꚉꚊꚋꚌꚍ</div>
<div class="line">ꚎꚏꚐꚑꚒꚓꚔꚕꚖꚗꚘꚙꚚꚛꚜꚝ</div>
</div>
<div data-block="Bamum">
<div class="line">ꚠꚡꚢꚣꚤꚥꚦꚧꚨꚩꚪꚫꚬꚭꚮꚯꚰꚱꚲꚳꚴꚵꚶꚷꚸꚹꚺꚻꚼꚽꚾꚿ</div>
<div class="line">ꛀꛁꛂꛃꛄꛅꛆꛇꛈꛉꛊꛋꛌꛍꛎꛏꛐꛑꛒꛓꛔꛕꛖꛗꛘꛙꛚꛛꛜꛝꛞꛟ</div>
<div class="line">ꛠꛡꛢꛣꛤꛥꛦꛧꛨꛩꛪꛫꛬꛭꛮꛯ꛲꛳꛴꛵꛶꛷</div>
</div>
<div data-block="Modifier">
<div class="line">꜀꜁꜂꜃꜄꜅꜆꜇꜈꜉꜊꜋꜌꜍꜎꜏꜐꜑꜒꜓꜔꜕꜖ꜗꜘꜙꜚꜛꜜꜝꜞꜟ</div>
</div>
<div data-block="Latin">
<div class="line">꜠꜡ꜢꜣꜤꜥꜦꜧꜨꜩꜪꜫꜬꜭꜮꜯꜰꜱꜲꜳꜴꜵꜶꜷꜸꜹꜺꜻꜼꜽꜾꜿ</div>
<div class="line">ꝀꝁꝂꝃꝄꝅꝆꝇꝈꝉꝊꝋꝌꝍꝎꝏꝐꝑꝒꝓꝔꝕꝖꝗꝘꝙꝚꝛꝜꝝꝞꝟ</div>
<div class="line">ꝠꝡꝢꝣꝤꝥꝦꝧꝨꝩꝪꝫꝬꝭꝮꝯꝰꝱꝲꝳꝴꝵꝶꝷꝸꝹꝺꝻꝼꝽꝾꝿ</div>
<div class="line">ꞀꞁꞂꞃꞄꞅꞆꞇꞈ꞉꞊ꞋꞌꞍꞎꞐꞑꞒꞓꞔꞕꞖꞗꞘꞙꞚꞛꞜꞝꞞꞟꞠ</div>
<div class="line">ꞡꞢꞣꞤꞥꞦꞧꞨꞩꞪꞫꞬꞭꞰꞱꟷꟸꟹꟺꟻꟼꟽꟾꟿ</div>
</div>
<div data-block="Syloti">
<div class="line">ꠀꠁꠃꠄꠅꠇꠈꠉꠊꠌꠍꠎꠏꠐꠑꠒꠓꠔꠕꠖꠗꠘꠙꠚꠛꠜꠝꠞꠟꠠꠡꠢ</div>
<div class="line">꠨꠩꠪꠫</div>
</div>
<div data-block="Common">
<div class="line">꠰꠱꠲꠳꠴꠵꠶꠷꠸꠹</div>
</div>
<div data-block="Phags">
<div class="line">ꡀꡁꡂꡃꡄꡅꡆꡇꡈꡉꡊꡋꡌꡍꡎꡏꡐꡑꡒꡓꡔꡕꡖꡗꡘꡙꡚꡛꡜꡝꡞꡟ</div>
<div class="line">ꡠꡡꡢꡣꡤꡥꡦꡧꡨꡩꡪꡫꡬꡭꡮꡯꡰꡱꡲꡳ꡴꡵꡶꡷</div>
</div>
<div data-block="Saurashtra">
<div class="line">ꢂꢃꢄꢅꢆꢇꢈꢉꢊꢋꢌꢍꢎꢏꢐꢑꢒꢓꢔꢕꢖꢗꢘꢙꢚꢛꢜꢝꢞꢟꢠꢡ</div>
<div class="line">ꢢꢣꢤꢥꢦꢧꢨꢩꢪꢫꢬꢭꢮꢯꢰꢱꢲꢳ꣎꣏꣐꣑꣒꣓꣔꣕꣖꣗꣘꣙</div>
</div>
<div data-block="Devanagari">
<div class="line">ꣲꣳꣴꣵꣶꣷ꣸꣹꣺ꣻ</div>
</div>
<div data-block="Kayah">
<div class="line">꤀꤁꤂꤃꤄꤅꤆꤇꤈꤉ꤊꤋꤌꤍꤎꤏꤐꤑꤒꤓꤔꤕꤖꤗꤘꤙꤚꤛꤜꤝꤞꤟ</div>
<div class="line">ꤠꤡꤢꤣꤤꤥ꤮꤯</div>
</div>
<div data-block="Rejang">
<div class="line">ꤰꤱꤲꤳꤴꤵꤶꤷꤸꤹꤺꤻꤼꤽꤾꤿꥀꥁꥂꥃꥄꥅꥆ꥟</div>
</div>
<div data-block="Javanese">
<div class="line">ꦄꦅꦆꦇꦈꦉꦊꦋꦌꦍꦎꦏꦐꦑꦒꦓꦔꦕꦖꦗꦘꦙꦚꦛꦜꦝꦞꦟꦠꦡꦢꦣ</div>
<div class="line">ꦤꦥꦦꦧꦨꦩꦪꦫꦬꦭꦮꦯꦰꦱꦲ꧁꧂꧃꧄꧅꧆꧇꧈꧉꧊꧋꧌꧍ꧏ꧐꧑꧒</div>
<div class="line">꧓꧔꧕꧖꧗꧘꧙꧞꧟</div>
</div>
<div data-block="Myanmar">
<div class="line">ꧠꧡꧢꧣꧤꧦꧧꧨꧩꧪꧫꧬꧭꧮꧯ꧰꧱꧲꧳꧴꧵꧶꧷꧸꧹ꧺꧻꧼꧽꧾ</div>
</div>
<div data-block="Cham">
<div class="line">ꨀꨁꨂꨃꨄꨅꨆꨇꨈꨉꨊꨋꨌꨍꨎꨏꨐꨑꨒꨓꨔꨕꨖꨗꨘꨙꨚꨛꨜꨝꨞꨟ</div>
<div class="line">ꨠꨡꨢꨣꨤꨥꨦꨧꨨꩀꩁꩂꩄꩅꩆꩇꩈꩉꩊꩋ꩐꩑꩒꩓꩔꩕꩖꩗꩘꩙꩜꩝</div>
<div class="line">꩞꩟</div>
</div>
<div data-block="Myanmar">
<div class="line">ꩠꩡꩢꩣꩤꩥꩦꩧꩨꩩꩪꩫꩬꩭꩮꩯꩰꩱꩲꩳꩴꩵꩶ꩷꩸꩹ꩺꩾꩿ</div>
</div>
<div data-block="Tai">
<div class="line">ꪀꪁꪂꪃꪄꪅꪆꪇꪈꪉꪊꪋꪌꪍꪎꪏꪐꪑꪒꪓꪔꪕꪖꪗꪘꪙꪚꪛꪜꪝꪞꪟ</div>
<div class="line">ꪠꪡꪢꪣꪤꪥꪦꪧꪨꪩꪪꪫꪬꪭꪮꪯꪱꪵꪶꪹꪺꪻꪼꪽꫀꫂꫛꫜꫝ꫞꫟</div>
</div>
<div data-block="Meetei">
<div class="line">ꫠꫡꫢꫣꫤꫥꫦꫧꫨꫩꫪ꫰꫱ꫲꫳꫴ</div>
</div>
<div data-block="Ethiopic">
<div class="line">ꬁꬂꬃꬄꬅꬆꬉꬊꬋꬌꬍꬎꬑꬒꬓꬔꬕꬖꬠꬡꬢꬣꬤꬥꬦꬨꬩꬪꬫꬬꬭꬮ</div>
</div>
<div data-block="Latin">
<div class="line">ꬰꬱꬲꬳꬴꬵꬶꬷꬸꬹꬺꬻꬼꬽꬾꬿꭀꭁꭂꭃꭄꭅꭆꭇꭈꭉꭊꭋꭌꭍꭎꭏ</div>
<div class="line">ꭐꭑꭒꭓꭔꭕꭖꭗꭘꭙꭚ꭛ꭜꭝꭞꭟꭤꭥ</div>
</div>
<div data-block="Meetei">
<div class="line">ꯀꯁꯂꯃꯄꯅꯆꯇꯈꯉꯊꯋꯌꯍꯎꯏꯐꯑꯒꯓꯔꯕꯖꯗꯘꯙꯚꯛꯜꯝꯞꯟ</div>
<div class="line">ꯠꯡꯢ꯫꯰꯱꯲꯳꯴꯵꯶꯷꯸꯹</div>
</div>
<div data-block="Alphabetic">
<div class="line">ﬀﬁﬂﬃﬄﬅﬆﬓﬔﬕﬖﬗיִײַﬠﬡﬢﬣﬤﬥﬦﬧﬨ﬩שׁשׂשּׁשּׂאַאָאּבּ</div>
<div class="line">גּדּהּוּזּטּיּךּכּלּמּנּסּףּפּצּקּרּשּתּוֹבֿכֿפֿﭏ</div>
</div>
<div data-block="Arabic">
<div class="line">ﭐﭑﭒﭓﭔﭕﭖﭗﭘﭙﭚﭛﭜﭝﭞﭟﭠﭡﭢﭣﭤﭥﭦﭧﭨﭩﭪﭫﭬﭭﭮﭯ</div>
<div class="line">ﭰﭱﭲﭳﭴﭵﭶﭷﭸﭹﭺﭻﭼﭽﭾﭿﮀﮁﮂﮃﮄﮅﮆﮇﮈﮉﮊﮋﮌﮍﮎﮏ</div>
<div class="line">ﮐﮑﮒﮓﮔﮕﮖﮗﮘﮙﮚﮛﮜﮝﮞﮟﮠﮡﮢﮣﮤﮥﮦﮧﮨﮩﮪﮫﮬﮭﮮﮯ</div>
<div class="line">ﮰﮱ﮲﮳﮴﮵﮶﮷﮸﮹﮺﮻﮼﮽﮾﮿﯀﯁ﯓﯔﯕﯖﯗﯘﯙﯚﯛﯜﯝﯞﯟﯠ</div>
<div class="line">ﯡﯢﯣﯤﯥﯦﯧﯨﯩﯪﯫﯬﯭﯮﯯﯰﯱﯲﯳﯴﯵﯶﯷﯸﯹﯺﯻﯼﯽﯾﯿﰀ</div>
<div class="line">ﰁﰂﰃﰄﰅﰆﰇﰈﰉﰊﰋﰌﰍﰎﰏﰐﰑﰒﰓﰔﰕﰖﰗﰘﰙﰚﰛﰜﰝﰞﰟﰠ</div>
<div class="line">ﰡﰢﰣﰤﰥﰦﰧﰨﰩﰪﰫﰬﰭﰮﰯﰰﰱﰲﰳﰴﰵﰶﰷﰸﰹﰺﰻﰼﰽﰾﰿﱀ</div>
<div class="line">ﱁﱂﱃﱄﱅﱆﱇﱈﱉﱊﱋﱌﱍﱎﱏﱐﱑﱒﱓﱔﱕﱖﱗﱘﱙﱚﱛﱜﱝﱞﱟﱠ</div>
<div class="line">ﱡﱢﱣﱤﱥﱦﱧﱨﱩﱪﱫﱬﱭﱮﱯﱰﱱﱲﱳﱴﱵﱶﱷﱸﱹﱺﱻﱼﱽﱾﱿﲀ</div>
<div class="line">ﲁﲂﲃﲄﲅﲆﲇﲈﲉﲊﲋﲌﲍﲎﲏﲐﲑﲒﲓﲔﲕﲖﲗﲘﲙﲚﲛﲜﲝﲞﲟﲠ</div>
<div class="line">ﲡﲢﲣﲤﲥﲦﲧﲨﲩﲪﲫﲬﲭﲮﲯﲰﲱﲲﲳﲴﲵﲶﲷﲸﲹﲺﲻﲼﲽﲾﲿﳀ</div>
<div class="line">ﳁﳂﳃﳄﳅﳆﳇﳈﳉﳊﳋﳌﳍﳎﳏﳐﳑﳒﳓﳔﳕﳖﳗﳘﳙﳚﳛﳜﳝﳞﳟﳠ</div>
<div class="line">ﳡﳢﳣﳤﳥﳦﳧﳨﳩﳪﳫﳬﳭﳮﳯﳰﳱﳲﳳﳴﳵﳶﳷﳸﳹﳺﳻﳼﳽﳾﳿﴀ</div>
<div class="line">ﴁﴂﴃﴄﴅﴆﴇﴈﴉﴊﴋﴌﴍﴎﴏﴐﴑﴒﴓﴔﴕﴖﴗﴘﴙﴚﴛﴜﴝﴞﴟﴠ</div>
<div class="line">ﴡﴢﴣﴤﴥﴦﴧﴨﴩﴪﴫﴬﴭﴮﴯﴰﴱﴲﴳﴴﴵﴶﴷﴸﴹﴺﴻﴼﴽ﴾﴿ﵐ</div>
<div class="line">ﵑﵒﵓﵔﵕﵖﵗﵘﵙﵚﵛﵜﵝﵞﵟﵠﵡﵢﵣﵤﵥﵦﵧﵨﵩﵪﵫﵬﵭﵮﵯﵰ</div>
<div class="line">ﵱﵲﵳﵴﵵﵶﵷﵸﵹﵺﵻﵼﵽﵾﵿﶀﶁﶂﶃﶄﶅﶆﶇﶈﶉﶊﶋﶌﶍﶎﶏﶒ</div>
<div class="line">ﶓﶔﶕﶖﶗﶘﶙﶚﶛﶜﶝﶞﶟﶠﶡﶢﶣﶤﶥﶦﶧﶨﶩﶪﶫﶬﶭﶮﶯﶰﶱﶲ</div>
<div class="line">ﶳﶴﶵﶶﶷﶸﶹﶺﶻﶼﶽﶾﶿﷀﷁﷂﷃﷄﷅﷆﷇﷰﷱﷲﷳﷴﷵﷶﷷﷸﷹﷺ</div>
<div class="line">ﷻ﷼﷽</div>
</div>
<div data-block="CJK">
<div class="line">﹉﹊﹋﹌﹍﹎﹏</div>
</div>
<div data-block="Small">
<div class="line">﹘﹣﹤﹥﹦</div>
</div>
<div data-block="Arabic">
<div class="line">ﹰﹱﹲﹳﹴﹶﹷﹸﹹﹺﹻﹼﹽﹾﹿﺀﺁﺂﺃﺄﺅﺆﺇﺈﺉﺊﺋﺌﺍﺎﺏﺐ</div>
<div class="line">ﺑﺒﺓﺔﺕﺖﺗﺘﺙﺚﺛﺜﺝﺞﺟﺠﺡﺢﺣﺤﺥﺦﺧﺨﺩﺪﺫﺬﺭﺮﺯﺰ</div>
<div class="line">ﺱﺲﺳﺴﺵﺶﺷﺸﺹﺺﺻﺼﺽﺾﺿﻀﻁﻂﻃﻄﻅﻆﻇﻈﻉﻊﻋﻌﻍﻎﻏﻐ</div>
<div class="line">ﻑﻒﻓﻔﻕﻖﻗﻘﻙﻚﻛﻜﻝﻞﻟﻠﻡﻢﻣﻤﻥﻦﻧﻨﻩﻪﻫﻬﻭﻮﻯﻰ</div>
<div class="line">ﻱﻲﻳﻴﻵﻶﻷﻸﻹﻺﻻﻼ</div>
</div>
<div data-block="Halfwidth">
<div class="line">－＜＝＞｡｢｣､･ｦｧｨｩｪｫｬｭｮｯｰｱｲｳｴｵｶｷｸｹｺｻｼ</div>
<div class="line">ｽｾｿﾀﾁﾂﾃﾄﾅﾆﾇﾈﾉﾊﾋﾌﾍﾎﾏﾐﾑﾒﾓﾔﾕﾖﾗﾘﾙﾚﾛﾜ</div>
<div class="line">ﾝﾞﾟﾠﾡﾢﾣﾤﾥﾦﾧﾨﾩﾪﾫﾬﾭﾮﾯﾰﾱﾲﾳﾴﾵﾶﾷﾸﾹﾺﾻﾼ</div>
<div class="line">ﾽﾾￂￃￄￅￆￇￊￋￌￍￎￏￒￓￔￕￖￗￚￛￜ￨￩￪￫￬￭￮</div>
</div>
<div data-block="Linear">
<div class="line">𐀀𐀁𐀂𐀃𐀄𐀅𐀆𐀇𐀈𐀉𐀊𐀋𐀍𐀎𐀏𐀐𐀑𐀒𐀓𐀔𐀕𐀖𐀗𐀘𐀙𐀚𐀛𐀜𐀝𐀞𐀟𐀠</div>
<div class="line">𐀡𐀢𐀣𐀤𐀥𐀦𐀨𐀩𐀪𐀫𐀬𐀭𐀮𐀯𐀰𐀱𐀲𐀳𐀴𐀵𐀶𐀷𐀸𐀹𐀺𐀼𐀽𐀿𐁀𐁁𐁂𐁃</div>
<div class="line">𐁄𐁅𐁆𐁇𐁈𐁉𐁊𐁋𐁌𐁍𐁐𐁑𐁒𐁓𐁔𐁕𐁖𐁗𐁘𐁙𐁚𐁛𐁜𐁝𐂀𐂁𐂂𐂃𐂄𐂅𐂆𐂇</div>
<div class="line">𐂈𐂉𐂊𐂋𐂌𐂍𐂎𐂏𐂐𐂑𐂒𐂓𐂔𐂕𐂖𐂗𐂘𐂙𐂚𐂛𐂜𐂝𐂞𐂟𐂠𐂡𐂢𐂣𐂤𐂥𐂦𐂧</div>
<div class="line">𐂨𐂩𐂪𐂫𐂬𐂭𐂮𐂯𐂰𐂱𐂲𐂳𐂴𐂵𐂶𐂷𐂸𐂹𐂺𐂻𐂼𐂽𐂾𐂿𐃀𐃁𐃂𐃃𐃄𐃅𐃆𐃇</div>
<div class="line">𐃈𐃉𐃊𐃋𐃌𐃍𐃎𐃏𐃐𐃑𐃒𐃓𐃔𐃕𐃖𐃗𐃘𐃙𐃚𐃛𐃜𐃝𐃞𐃟𐃠𐃡𐃢𐃣𐃤𐃥𐃦𐃧</div>
<div class="line">𐃨𐃩𐃪𐃫𐃬𐃭𐃮𐃯𐃰𐃱𐃲𐃳𐃴𐃵𐃶𐃷𐃸𐃹𐃺</div>
</div>
<div data-block="Aegean">
<div class="line">𐄀𐄁𐄂𐄇𐄈𐄉𐄊𐄋𐄌𐄍𐄎𐄏𐄐𐄑𐄒𐄓𐄔𐄕𐄖𐄗𐄘𐄙𐄚𐄛𐄜𐄝𐄞𐄟𐄠𐄡𐄢𐄣</div>
<div class="line">𐄤𐄥𐄦𐄧𐄨𐄩𐄪𐄫𐄬𐄭𐄮𐄯𐄰𐄱𐄲𐄳𐄷𐄸𐄹𐄺𐄻𐄼𐄽𐄾𐄿</div>
</div>
<div data-block="Ancient">
<div class="line">𐅀𐅁𐅂𐅃𐅄𐅅𐅆𐅇𐅈𐅉𐅊𐅋𐅌𐅍𐅎𐅏𐅐𐅑𐅒𐅓𐅔𐅕𐅖𐅗𐅘𐅙𐅚𐅛𐅜𐅝𐅞𐅟</div>
<div class="line">𐅠𐅡𐅢𐅣𐅤𐅥𐅦𐅧𐅨𐅩𐅪𐅫𐅬𐅭𐅮𐅯𐅰𐅱𐅲𐅳𐅴𐅵𐅶𐅷𐅸𐅹𐅺𐅻𐅼𐅽𐅾𐅿</div>
<div class="line">𐆀𐆁𐆂𐆃𐆄𐆅𐆆𐆇𐆈𐆉𐆊𐆋𐆌𐆐𐆑𐆒𐆓𐆔𐆕𐆖𐆗𐆘𐆙𐆚𐆛𐆠</div>
</div>
<div data-block="Phaistos">
<div class="line">𐇐𐇑𐇒𐇓𐇔𐇕𐇖𐇗𐇘𐇙𐇚𐇛𐇜𐇝𐇞𐇟𐇠𐇡𐇢𐇣𐇤𐇥𐇦𐇧𐇨𐇩𐇪𐇫𐇬𐇭𐇮𐇯</div>
<div class="line">𐇰𐇱𐇲𐇳𐇴𐇵𐇶𐇷𐇸𐇹𐇺𐇻𐇼</div>
</div>
<div data-block="Lycian">
<div class="line">𐊀𐊁𐊂𐊃𐊄𐊅𐊆𐊇𐊈𐊉𐊊𐊋𐊌𐊍𐊎𐊏𐊐𐊑𐊒𐊓𐊔𐊕𐊖𐊗𐊘𐊙𐊚𐊛𐊜</div>
</div>
<div data-block="Carian">
<div class="line">𐊠𐊡𐊢𐊣𐊤𐊥𐊦𐊧𐊨𐊩𐊪𐊫𐊬𐊭𐊮𐊯𐊰𐊱𐊲𐊳𐊴𐊵𐊶𐊷𐊸𐊹𐊺𐊻𐊼𐊽𐊾𐊿</div>
<div class="line">𐋀𐋁𐋂𐋃𐋄𐋅𐋆𐋇𐋈𐋉𐋊𐋋𐋌𐋍𐋎𐋏𐋐</div>
</div>
<div data-block="Coptic">
<div class="line">𐋡𐋢𐋣𐋤𐋥𐋦𐋧𐋨𐋩𐋪𐋫𐋬𐋭𐋮𐋯𐋰𐋱𐋲𐋳𐋴𐋵𐋶𐋷𐋸𐋹𐋺𐋻</div>
</div>
<div data-block="Old">
<div class="line">𐌀𐌁𐌂𐌃𐌄𐌅𐌆𐌇𐌈𐌉𐌊𐌋𐌌𐌍𐌎𐌏𐌐𐌑𐌒𐌓𐌔𐌕𐌖𐌗𐌘𐌙𐌚𐌛𐌜𐌝𐌞𐌟</div>
<div class="line">𐌠𐌡𐌢𐌣</div>
</div>
<div data-block="Gothic">
<div class="line">𐌰𐌱𐌲𐌳𐌴𐌵𐌶𐌷𐌸𐌹𐌺𐌻𐌼𐌽𐌾𐌿𐍀𐍁𐍂𐍃𐍄𐍅𐍆𐍇𐍈𐍉𐍊</div>
</div>
<div data-block="Old">
<div class="line">𐍐𐍑𐍒𐍓𐍔𐍕𐍖𐍗𐍘𐍙𐍚𐍛𐍜𐍝𐍞𐍟𐍠𐍡𐍢𐍣𐍤𐍥𐍦𐍧𐍨𐍩𐍪𐍫𐍬𐍭𐍮𐍯</div>
<div class="line">𐍰𐍱𐍲𐍳𐍴𐍵</div>
</div>
<div data-block="Ugaritic">
<div class="line">𐎀𐎁𐎂𐎃𐎄𐎅𐎆𐎇𐎈𐎉𐎊𐎋𐎌𐎍𐎎𐎏𐎐𐎑𐎒𐎓𐎔𐎕𐎖𐎗𐎘𐎙𐎚𐎛𐎜𐎝𐎟</div>
</div>
<div data-block="Old">
<div class="line">𐎠𐎡𐎢𐎣𐎤𐎥𐎦𐎧𐎨𐎩𐎪𐎫𐎬𐎭𐎮𐎯𐎰𐎱𐎲𐎳𐎴𐎵𐎶𐎷𐎸𐎹𐎺𐎻𐎼𐎽𐎾𐎿</div>
<div class="line">𐏀𐏁𐏂𐏃𐏈𐏉𐏊𐏋𐏌𐏍𐏎𐏏𐏐𐏑𐏒𐏓𐏔𐏕</div>
</div>
<div data-block="Deseret">
<div class="line">𐐀𐐁𐐂𐐃𐐄𐐅𐐆𐐇𐐈𐐉𐐊𐐋𐐌𐐍𐐎𐐏𐐐𐐑𐐒𐐓𐐔𐐕𐐖𐐗𐐘𐐙𐐚𐐛𐐜𐐝𐐞𐐟</div>
<div class="line">𐐠𐐡𐐢𐐣𐐤𐐥𐐦𐐧𐐨𐐩𐐪𐐫𐐬𐐭𐐮𐐯𐐰𐐱𐐲𐐳𐐴𐐵𐐶𐐷𐐸𐐹𐐺𐐻𐐼𐐽𐐾𐐿</div>
<div class="line">𐑀𐑁𐑂𐑃𐑄𐑅𐑆𐑇𐑈𐑉𐑊𐑋𐑌𐑍𐑎𐑏</div>
</div>
<div data-block="Shavian">
<div class="line">𐑐𐑑𐑒𐑓𐑔𐑕𐑖𐑗𐑘𐑙𐑚𐑛𐑜𐑝𐑞𐑟𐑠𐑡𐑢𐑣𐑤𐑥𐑦𐑧𐑨𐑩𐑪𐑫𐑬𐑭𐑮𐑯</div>
<div class="line">𐑰𐑱𐑲𐑳𐑴𐑵𐑶𐑷𐑸𐑹𐑺𐑻𐑼𐑽𐑾𐑿</div>
</div>
<div data-block="Osmanya">
<div class="line">𐒀𐒁𐒂𐒃𐒄𐒅𐒆𐒇𐒈𐒉𐒊𐒋𐒌𐒍𐒎𐒏𐒐𐒑𐒒𐒓𐒔𐒕𐒖𐒗𐒘𐒙𐒚𐒛𐒜𐒝𐒠𐒡</div>
<div class="line">𐒢𐒣𐒤𐒥𐒦𐒧𐒨𐒩</div>
</div>
<div data-block="Elbasan">
<div class="line">𐔀𐔁𐔂𐔃𐔄𐔅𐔆𐔇𐔈𐔉𐔊𐔋𐔌𐔍𐔎𐔏𐔐𐔑𐔒𐔓𐔔𐔕𐔖𐔗𐔘𐔙𐔚𐔛𐔜𐔝𐔞𐔟</div>
<div class="line">𐔠𐔡𐔢𐔣𐔤𐔥𐔦𐔧</div>
</div>
<div data-block="Caucasian">
<div class="line">𐔰𐔱𐔲𐔳𐔴𐔵𐔶𐔷𐔸𐔹𐔺𐔻𐔼𐔽𐔾𐔿𐕀𐕁𐕂𐕃𐕄𐕅𐕆𐕇𐕈𐕉𐕊𐕋𐕌𐕍𐕎𐕏</div>
<div class="line">𐕐𐕑𐕒𐕓𐕔𐕕𐕖𐕗𐕘𐕙𐕚𐕛𐕜𐕝𐕞𐕟𐕠𐕡𐕢𐕣𐕯</div>
</div>
<div data-block="Linear">
<div class="line">𐘀𐘁𐘂𐘃𐘄𐘅𐘆𐘇𐘈𐘉𐘊𐘋𐘌𐘍𐘎𐘏𐘐𐘑𐘒𐘓𐘔𐘕𐘖𐘗𐘘𐘙𐘚𐘛𐘜𐘝𐘞𐘟</div>
<div class="line">𐘠𐘡𐘢𐘣𐘤𐘥𐘦𐘧𐘨𐘩𐘪𐘫𐘬𐘭𐘮𐘯𐘰𐘱𐘲𐘳𐘴𐘵𐘶𐘷𐘸𐘹𐘺𐘻𐘼𐘽𐘾𐘿</div>
<div class="line">𐙀𐙁𐙂𐙃𐙄𐙅𐙆𐙇𐙈𐙉𐙊𐙋𐙌𐙍𐙎𐙏𐙐𐙑𐙒𐙓𐙔𐙕𐙖𐙗𐙘𐙙𐙚𐙛𐙜𐙝𐙞𐙟</div>
<div class="line">𐙠𐙡𐙢𐙣𐙤𐙥𐙦𐙧𐙨𐙩𐙪𐙫𐙬𐙭𐙮𐙯𐙰𐙱𐙲𐙳𐙴𐙵𐙶𐙷𐙸𐙹𐙺𐙻𐙼𐙽𐙾𐙿</div>
<div class="line">𐚀𐚁𐚂𐚃𐚄𐚅𐚆𐚇𐚈𐚉𐚊𐚋𐚌𐚍𐚎𐚏𐚐𐚑𐚒𐚓𐚔𐚕𐚖𐚗𐚘𐚙𐚚𐚛𐚜𐚝𐚞𐚟</div>
<div class="line">𐚠𐚡𐚢𐚣𐚤𐚥𐚦𐚧𐚨𐚩𐚪𐚫𐚬𐚭𐚮𐚯𐚰𐚱𐚲𐚳𐚴𐚵𐚶𐚷𐚸𐚹𐚺𐚻𐚼𐚽𐚾𐚿</div>
<div class="line">𐛀𐛁𐛂𐛃𐛄𐛅𐛆𐛇𐛈𐛉𐛊𐛋𐛌𐛍𐛎𐛏𐛐𐛑𐛒𐛓𐛔𐛕𐛖𐛗𐛘𐛙𐛚𐛛𐛜𐛝𐛞𐛟</div>
<div class="line">𐛠𐛡𐛢𐛣𐛤𐛥𐛦𐛧𐛨𐛩𐛪𐛫𐛬𐛭𐛮𐛯𐛰𐛱𐛲𐛳𐛴𐛵𐛶𐛷𐛸𐛹𐛺𐛻𐛼𐛽𐛾𐛿</div>
<div class="line">𐜀𐜁𐜂𐜃𐜄𐜅𐜆𐜇𐜈𐜉𐜊𐜋𐜌𐜍𐜎𐜏𐜐𐜑𐜒𐜓𐜔𐜕𐜖𐜗𐜘𐜙𐜚𐜛𐜜𐜝𐜞𐜟</div>
<div class="line">𐜠𐜡𐜢𐜣𐜤𐜥𐜦𐜧𐜨𐜩𐜪𐜫𐜬𐜭𐜮𐜯𐜰𐜱𐜲𐜳𐜴𐜵𐜶𐝀𐝁𐝂𐝃𐝄𐝅𐝆𐝇𐝈</div>
<div class="line">𐝉𐝊𐝋𐝌𐝍𐝎𐝏𐝐𐝑𐝒𐝓𐝔𐝕𐝠𐝡𐝢𐝣𐝤𐝥𐝦𐝧</div>
</div>
<div data-block="Cypriot">
<div class="line">𐠀𐠁𐠂𐠃𐠄𐠅𐠈𐠊𐠋𐠌𐠍𐠎𐠏𐠐𐠑𐠒𐠓𐠔𐠕𐠖𐠗𐠘𐠙𐠚𐠛𐠜𐠝𐠞𐠟𐠠𐠡𐠢</div>
<div class="line">𐠣𐠤𐠥𐠦𐠧𐠨𐠩𐠪𐠫𐠬𐠭𐠮𐠯𐠰𐠱𐠲𐠳𐠴𐠵𐠷𐠸𐠼𐠿</div>
</div>
<div data-block="Imperial">
<div class="line">𐡀𐡁𐡂𐡃𐡄𐡅𐡆𐡇𐡈𐡉𐡊𐡋𐡌𐡍𐡎𐡏𐡐𐡑𐡒𐡓𐡔𐡕𐡗𐡘𐡙𐡚𐡛𐡜𐡝𐡞𐡟</div>
</div>
<div data-block="Palmyrene">
<div class="line">𐡠𐡡𐡢𐡣𐡤𐡥𐡦𐡧𐡨𐡩𐡪𐡫𐡬𐡭𐡮𐡯𐡰𐡱𐡲𐡳𐡴𐡵𐡶𐡷𐡸𐡹𐡺𐡻𐡼𐡽𐡾𐡿</div>
</div>
<div data-block="Nabataean">
<div class="line">𐢀𐢁𐢂𐢃𐢄𐢅𐢆𐢇𐢈𐢉𐢊𐢋𐢌𐢍𐢎𐢏𐢐𐢑𐢒𐢓𐢔𐢕𐢖𐢗𐢘𐢙𐢚𐢛𐢜𐢝𐢞𐢧</div>
<div class="line">𐢨𐢩𐢪𐢫𐢬𐢭𐢮𐢯</div>
</div>
<div data-block="Old">
<div class="line">𐪀𐪁𐪂𐪃𐪄𐪅𐪆𐪇𐪈𐪉𐪊𐪋𐪌𐪍𐪎𐪏𐪐𐪑𐪒𐪓𐪔𐪕𐪖𐪗𐪘𐪙𐪚𐪛𐪜𐪝𐪞𐪟</div>
</div>
<div data-block="Phoenician">
<div class="line">𐤀𐤁𐤂𐤃𐤄𐤅𐤆𐤇𐤈𐤉𐤊𐤋𐤌𐤍𐤎𐤏𐤐𐤑𐤒𐤓𐤔𐤕𐤖𐤗𐤘𐤙𐤚𐤛𐤟</div>
</div>
<div data-block="Lydian">
<div class="line">𐤠𐤡𐤢𐤣𐤤𐤥𐤦𐤧𐤨𐤩𐤪𐤫𐤬𐤭𐤮𐤯𐤰𐤱𐤲𐤳𐤴𐤵𐤶𐤷𐤸𐤹𐤿</div>
</div>
<div data-block="Meroitic">
<div class="line">𐦠𐦡𐦢𐦣𐦤𐦥𐦦𐦧𐦨𐦩𐦪𐦫𐦬𐦭𐦮𐦯𐦰𐦱𐦲𐦳𐦴𐦵𐦶𐦷𐦾𐦿</div>
</div>
<div data-block="Kharoshthi">
<div class="line">𐨀𐨐𐨑𐨒𐨓𐨕𐨖𐨗𐨙𐨚𐨛𐨜𐨝𐨞𐨟𐨠𐨡𐨢𐨣𐨤𐨥𐨦𐨧𐨨𐨩𐨪𐨫𐨬𐨭𐨮𐨯𐨰</div>
<div class="line">𐨱𐨲𐨳𐩀𐩁𐩂𐩃𐩄𐩅𐩆𐩇𐩐𐩑𐩒𐩓𐩔𐩕𐩖𐩗𐩘</div>
</div>
<div data-block="Old">
<div class="line">𐩠𐩡𐩢𐩣𐩤𐩥𐩦𐩧𐩨𐩩𐩪𐩫𐩬𐩭𐩮𐩯𐩰𐩱𐩲𐩳𐩴𐩵𐩶𐩷𐩸𐩹𐩺𐩻𐩼𐩽𐩾𐩿</div>
</div>
<div data-block="Manichaean">
<div class="line">𐫀𐫁𐫂𐫃𐫄𐫅𐫆𐫇𐫈𐫉𐫊𐫋𐫌𐫍𐫎𐫏𐫐𐫑𐫒𐫓𐫔𐫕𐫖𐫗𐫘𐫙𐫚𐫛𐫜𐫝𐫞𐫟</div>
<div class="line">𐫠𐫡𐫢𐫣𐫤𐫫𐫬𐫭𐫮𐫯𐫰𐫱𐫲𐫳𐫴𐫵𐫶</div>
</div>
<div data-block="Avestan">
<div class="line">𐬀𐬁𐬂𐬃𐬄𐬅𐬆𐬇𐬈𐬉𐬊𐬋𐬌𐬍𐬎𐬏𐬐𐬑𐬒𐬓𐬔𐬕𐬖𐬗𐬘𐬙𐬚𐬛𐬜𐬝𐬞𐬟</div>
<div class="line">𐬠𐬡𐬢𐬣𐬤𐬥𐬦𐬧𐬨𐬩𐬪𐬫𐬬𐬭𐬮𐬯𐬰𐬱𐬲𐬳𐬴𐬵𐬹𐬺𐬻𐬼𐬽𐬾𐬿</div>
</div>
<div data-block="Inscriptional">
<div class="line">𐭀𐭁𐭂𐭃𐭄𐭅𐭆𐭇𐭈𐭉𐭊𐭋𐭌𐭍𐭎𐭏𐭐𐭑𐭒𐭓𐭔𐭕𐭘𐭙𐭚𐭛𐭜𐭝𐭞𐭟𐭠𐭡</div>
<div class="line">𐭢𐭣𐭤𐭥𐭦𐭧𐭨𐭩𐭪𐭫𐭬𐭭𐭮𐭯𐭰𐭱𐭲𐭸𐭹𐭺𐭻𐭼𐭽𐭾𐭿</div>
</div>
<div data-block="Psalter">
<div class="line">𐮀𐮁𐮂𐮃𐮄𐮅𐮆𐮇𐮈𐮉𐮊𐮋𐮌𐮍𐮎𐮏𐮐𐮑𐮙𐮚𐮛𐮜𐮩𐮪𐮫𐮬𐮭𐮮𐮯</div>
</div>
<div data-block="Old">
<div class="line">𐰀𐰁𐰂𐰃𐰄𐰅𐰆𐰇𐰈𐰉𐰊𐰋𐰌𐰍𐰎𐰏𐰐𐰑𐰒𐰓𐰔𐰕𐰖𐰗𐰘𐰙𐰚𐰛𐰜𐰝𐰞𐰟</div>
<div class="line">𐰠𐰡𐰢𐰣𐰤𐰥𐰦𐰧𐰨𐰩𐰪𐰫𐰬𐰭𐰮𐰯𐰰𐰱𐰲𐰳𐰴𐰵𐰶𐰷𐰸𐰹𐰺𐰻𐰼𐰽𐰾𐰿</div>
<div class="line">𐱀𐱁𐱂𐱃𐱄𐱅𐱆𐱇𐱈</div>
</div>
<div data-block="Rumi">
<div class="line">𐹠𐹡𐹢𐹣𐹤𐹥𐹦𐹧𐹨𐹩𐹪𐹫𐹬𐹭𐹮𐹯𐹰𐹱𐹲𐹳𐹴𐹵𐹶𐹷𐹸𐹹𐹺𐹻𐹼𐹽𐹾</div>
</div>
<div data-block="Brahmi">
<div class="line">𑀃𑀄𑀅𑀆𑀇𑀈𑀉𑀊𑀋𑀌𑀍𑀎𑀏𑀐𑀑𑀒𑀓𑀔𑀕𑀖𑀗𑀘𑀙𑀚𑀛𑀜𑀝𑀞𑀟𑀠𑀡𑀢</div>
<div class="line">𑀣𑀤𑀥𑀦𑀧𑀨𑀩𑀪𑀫𑀬𑀭𑀮𑀯𑀰𑀱𑀲𑀳𑀴𑀵𑀶𑀷𑁇𑁈𑁉𑁊𑁋𑁌𑁍𑁒𑁓𑁔𑁕</div>
<div class="line">𑁖𑁗𑁘𑁙𑁚𑁛𑁜𑁝𑁞𑁟𑁠𑁡𑁢𑁣𑁤𑁥𑁦𑁧𑁨𑁩𑁪𑁫𑁬𑁭𑁮𑁯</div>
</div>
<div data-block="Kaithi">
<div class="line">𑂃𑂄𑂅𑂆𑂇𑂈𑂉𑂊𑂋𑂌𑂍𑂎𑂏𑂐𑂑𑂒𑂓𑂔𑂕𑂖𑂗𑂘𑂙𑂚𑂛𑂜𑂝𑂞𑂟𑂠𑂡𑂢</div>
<div class="line">𑂣𑂤𑂥𑂦𑂧𑂨𑂩𑂪𑂫𑂬𑂭𑂮𑂯𑂻𑂼𑂾𑂿𑃀𑃁</div>
</div>
<div data-block="Sora">
<div class="line">𑃐𑃑𑃒𑃓𑃔𑃕𑃖𑃗𑃘𑃙𑃚𑃛𑃜𑃝𑃞𑃟𑃠𑃡𑃢𑃣𑃤𑃥𑃦𑃧𑃨𑃰𑃱𑃲𑃳𑃴𑃵𑃶</div>
<div class="line">𑃷𑃸𑃹</div>
</div>
<div data-block="Chakma">
<div class="line">𑄃𑄄𑄅𑄆𑄇𑄈𑄉𑄊𑄋𑄌𑄍𑄎𑄏𑄐𑄑𑄒𑄓𑄔𑄕𑄖𑄗𑄘𑄙𑄚𑄛𑄜𑄝𑄞𑄟𑄠𑄡𑄢</div>
<div class="line">𑄣𑄤𑄥𑄦𑄶𑄷𑄸𑄹𑄺𑄻𑄼𑄽𑄾𑄿𑅀𑅁𑅂𑅃</div>
</div>
<div data-block="Mahajani">
<div class="line">𑅐𑅑𑅒𑅓𑅔𑅕𑅖𑅗𑅘𑅙𑅚𑅛𑅜𑅝𑅞𑅟𑅠𑅡𑅢𑅣𑅤𑅥𑅦𑅧𑅨𑅩𑅪𑅫𑅬𑅭𑅮𑅯</div>
<div class="line">𑅰𑅱𑅲𑅴𑅵𑅶</div>
</div>
<div data-block="Sharada">
<div class="line">𑆃𑆄𑆅𑆆𑆇𑆈𑆉𑆊𑆋𑆌𑆍𑆎𑆏𑆐𑆑𑆒𑆓𑆔𑆕𑆖𑆗𑆘𑆙𑆚𑆛𑆜𑆝𑆞𑆟𑆠𑆡𑆢</div>
<div class="line">𑆣𑆤𑆥𑆦𑆧𑆨𑆩𑆪𑆫𑆬𑆭𑆮𑆯𑆰𑆱𑆲𑇁𑇂𑇃𑇄𑇅𑇆𑇇𑇈𑇍𑇐𑇑𑇒𑇓𑇔𑇕𑇖</div>
<div class="line">𑇗𑇘𑇙𑇚</div>
</div>
<div data-block="Sinhala">
<div class="line">𑇡𑇢𑇣𑇤𑇥𑇦𑇧𑇨𑇩𑇪𑇫𑇬𑇭𑇮𑇯𑇰𑇱𑇲𑇳𑇴</div>
</div>
<div data-block="Khojki">
<div class="line">𑈀𑈁𑈂𑈃𑈄𑈅𑈆𑈇𑈈𑈉𑈊𑈋𑈌𑈍𑈎𑈏𑈐𑈑𑈓𑈔𑈕𑈖𑈗𑈘𑈙𑈚𑈛𑈜𑈝𑈞𑈟𑈠</div>
<div class="line">𑈡𑈢𑈣𑈤𑈥𑈦𑈧𑈨𑈩𑈪𑈫𑈸𑈹𑈺𑈻𑈼𑈽</div>
</div>
<div data-block="Khudawadi">
<div class="line">𑊰𑊱𑊲𑊳𑊴𑊵𑊶𑊷𑊸𑊹𑊺𑊻𑊼𑊽𑊾𑊿𑋀𑋁𑋂𑋃𑋄𑋅𑋆𑋇𑋈𑋉𑋊𑋋𑋌𑋍𑋎𑋏</div>
<div class="line">𑋐𑋑𑋒𑋓𑋔𑋕𑋖𑋗𑋘𑋙𑋚𑋛𑋜𑋝𑋞𑋰𑋱𑋲𑋳𑋴𑋵𑋶𑋷𑋸𑋹</div>
</div>
<div data-block="Grantha">
<div class="line">𑌅𑌆𑌇𑌈𑌉𑌊𑌋𑌌𑌏𑌐𑌓𑌔𑌕𑌖𑌗𑌘𑌙𑌚𑌛𑌜𑌝𑌞𑌟𑌠𑌡𑌢𑌣𑌤𑌥𑌦𑌧𑌨</div>
<div class="line">𑌪𑌫𑌬𑌭𑌮𑌯𑌰𑌲𑌳𑌵𑌶𑌷𑌸𑌹𑌽𑍝𑍞𑍟𑍠𑍡</div>
</div>
<div data-block="Tirhuta">
<div class="line">𑒀𑒁𑒂𑒃𑒄𑒅𑒆𑒇𑒈𑒉𑒊𑒋𑒌𑒍𑒎𑒏𑒐𑒑𑒒𑒓𑒔𑒕𑒖𑒗𑒘𑒙𑒚𑒛𑒜𑒝𑒞𑒟</div>
<div class="line">𑒠𑒡𑒢𑒣𑒤𑒥𑒦𑒧𑒨𑒩𑒪𑒫𑒬𑒭𑒮𑒯𑓄𑓅𑓆𑓇𑓐𑓑𑓒𑓓𑓔𑓕𑓖𑓗𑓘𑓙</div>
</div>
<div data-block="Modi">
<div class="line">𑘀𑘁𑘂𑘃𑘄𑘅𑘆𑘇𑘈𑘉𑘊𑘋𑘌𑘍𑘎𑘏𑘐𑘑𑘒𑘓𑘔𑘕𑘖𑘗𑘘𑘙𑘚𑘛𑘜𑘝𑘞𑘟</div>
<div class="line">𑘠𑘡𑘢𑘣𑘤𑘥𑘦𑘧𑘨𑘩𑘪𑘫𑘬𑘭𑘮𑘯𑙁𑙂𑙃𑙄𑙐𑙑𑙒𑙓𑙔𑙕𑙖𑙗𑙘𑙙</div>
</div>
<div data-block="Takri">
<div class="line">𑚀𑚁𑚂𑚃𑚄𑚅𑚆𑚇𑚈𑚉𑚊𑚋𑚌𑚍𑚎𑚏𑚐𑚑𑚒𑚓𑚔𑚕𑚖𑚗𑚘𑚙𑚚𑚛𑚜𑚝𑚞𑚟</div>
<div class="line">𑚠𑚡𑚢𑚣𑚤𑚥𑚦𑚧𑚨𑚩𑚪𑛀𑛁𑛂𑛃𑛄𑛅𑛆𑛇𑛈𑛉</div>
</div>
<div data-block="Warang">
<div class="line">𑢠𑢡𑢢𑢣𑢤𑢥𑢦𑢧𑢨𑢩𑢪𑢫𑢬𑢭𑢮𑢯𑢰𑢱𑢲𑢳𑢴𑢵𑢶𑢷𑢸𑢹𑢺𑢻𑢼𑢽𑢾𑢿</div>
<div class="line">𑣀𑣁𑣂𑣃𑣄𑣅𑣆𑣇𑣈𑣉𑣊𑣋𑣌𑣍𑣎𑣏𑣐𑣑𑣒𑣓𑣔𑣕𑣖𑣗𑣘𑣙𑣚𑣛𑣜𑣝𑣞𑣟</div>
<div class="line">𑣠𑣡𑣢𑣣𑣤𑣥𑣦𑣧𑣨𑣩𑣪𑣫𑣬𑣭𑣮𑣯𑣰𑣱𑣲𑣿</div>
</div>
<div data-block="Pau">
<div class="line">𑫀𑫁𑫂𑫃𑫄𑫅𑫆𑫇𑫈𑫉𑫊𑫋𑫌𑫍𑫎𑫏𑫐𑫑𑫒𑫓𑫔𑫕𑫖𑫗𑫘𑫙𑫚𑫛𑫜𑫝𑫞𑫟</div>
<div class="line">𑫠𑫡𑫢𑫣𑫤𑫥𑫦𑫧𑫨𑫩𑫪𑫫𑫬𑫭𑫮𑫯𑫰𑫱𑫲𑫳𑫴𑫵𑫶𑫷𑫸</div>
</div>
<div data-block="Cuneiform">
<div class="line">𒀀𒀁𒀂𒀃𒀄𒀅𒀆𒀇𒀈𒀉𒀊𒀋𒀌𒀍𒀎𒀏𒀐𒀑𒀒𒀓𒀔𒀕𒀖𒀗𒀘𒀙𒀚𒀛𒀜𒀝𒀞𒀟</div>
<div class="line">𒀠𒀡𒀢𒀣𒀤𒀥𒀦𒀧𒀨𒀩𒀪𒀫𒀬𒀭𒀮𒀯𒀰𒀱𒀲𒀳𒀴𒀵𒀶𒀷𒀸𒀹𒀺𒀻𒀼𒀽𒀾𒀿</div>
<div class="line">𒁀𒁁𒁂𒁃𒁄𒁅𒁆𒁇𒁈𒁉𒁊𒁋𒁌𒁍𒁎𒁏𒁐𒁑𒁒𒁓𒁔𒁕𒁖𒁗𒁘𒁙𒁚𒁛𒁜𒁝𒁞𒁟</div>
<div class="line">𒁠𒁡𒁢𒁣𒁤𒁥𒁦𒁧𒁨𒁩𒁪𒁫𒁬𒁭𒁮𒁯𒁰𒁱𒁲𒁳𒁴𒁵𒁶𒁷𒁸𒁹𒁺𒁻𒁼𒁽𒁾𒁿</div>
<div class="line">𒂀𒂁𒂂𒂃𒂄𒂅𒂆𒂇𒂈𒂉𒂊𒂋𒂌𒂍𒂎𒂏𒂐𒂑𒂒𒂓𒂔𒂕𒂖𒂗𒂘𒂙𒂚𒂛𒂜𒂝𒂞𒂟</div>
<div class="line">𒂠𒂡𒂢𒂣𒂤𒂥𒂦𒂧𒂨𒂩𒂪𒂫𒂬𒂭𒂮𒂯𒂰𒂱𒂲𒂳𒂴𒂵𒂶𒂷𒂸𒂹𒂺𒂻𒂼𒂽𒂾𒂿</div>
<div class="line">𒃀𒃁𒃂𒃃𒃄𒃅𒃆𒃇𒃈𒃉𒃊𒃋𒃌𒃍𒃎𒃏𒃐𒃑𒃒𒃓𒃔𒃕𒃖𒃗𒃘𒃙𒃚𒃛𒃜𒃝𒃞𒃟</div>
<div class="line">𒃠𒃡𒃢𒃣𒃤𒃥𒃦𒃧𒃨𒃩𒃪𒃫𒃬𒃭𒃮𒃯𒃰𒃱𒃲𒃳𒃴𒃵𒃶𒃷𒃸𒃹𒃺𒃻𒃼𒃽𒃾𒃿</div>
<div class="line">𒄀𒄁𒄂𒄃𒄄𒄅𒄆𒄇𒄈𒄉𒄊𒄋𒄌𒄍𒄎𒄏𒄐𒄑𒄒𒄓𒄔𒄕𒄖𒄗𒄘𒄙𒄚𒄛𒄜𒄝𒄞𒄟</div>
<div class="line">𒄠𒄡𒄢𒄣𒄤𒄥𒄦𒄧𒄨𒄩𒄪𒄫𒄬𒄭𒄮𒄯𒄰𒄱𒄲𒄳𒄴𒄵𒄶𒄷𒄸𒄹𒄺𒄻𒄼𒄽𒄾𒄿</div>
<div class="line">𒅀𒅁𒅂𒅃𒅄𒅅𒅆𒅇𒅈𒅉𒅊𒅋𒅌𒅍𒅎𒅏𒅐𒅑𒅒𒅓𒅔𒅕𒅖𒅗𒅘𒅙𒅚𒅛𒅜𒅝𒅞𒅟</div>
<div class="line">𒅠𒅡𒅢𒅣𒅤𒅥𒅦𒅧𒅨𒅩𒅪𒅫𒅬𒅭𒅮𒅯𒅰𒅱𒅲𒅳𒅴𒅵𒅶𒅷𒅸𒅹𒅺𒅻𒅼𒅽𒅾𒅿</div>
<div class="line">𒆀𒆁𒆂𒆃𒆄𒆅𒆆𒆇𒆈𒆉𒆊𒆋𒆌𒆍𒆎𒆏𒆐𒆑𒆒𒆓𒆔𒆕𒆖𒆗𒆘𒆙𒆚𒆛𒆜𒆝𒆞𒆟</div>
<div class="line">𒆠𒆡𒆢𒆣𒆤𒆥𒆦𒆧𒆨𒆩𒆪𒆫𒆬𒆭𒆮𒆯𒆰𒆱𒆲𒆳𒆴𒆵𒆶𒆷𒆸𒆹𒆺𒆻𒆼𒆽𒆾𒆿</div>
<div class="line">𒇀𒇁𒇂𒇃𒇄𒇅𒇆𒇇𒇈𒇉𒇊𒇋𒇌𒇍𒇎𒇏𒇐𒇑𒇒𒇓𒇔𒇕𒇖𒇗𒇘𒇙𒇚𒇛𒇜𒇝𒇞𒇟</div>
<div class="line">𒇠𒇡𒇢𒇣𒇤𒇥𒇦𒇧𒇨𒇩𒇪𒇫𒇬𒇭𒇮𒇯𒇰𒇱𒇲𒇳𒇴𒇵𒇶𒇷𒇸𒇹𒇺𒇻𒇼𒇽𒇾𒇿</div>
<div class="line">𒈀𒈁𒈂𒈃𒈄𒈅𒈆𒈇𒈈𒈉𒈊𒈋𒈌𒈍𒈎𒈏𒈐𒈑𒈒𒈓𒈔𒈕𒈖𒈗𒈘𒈙𒈚𒈛𒈜𒈝𒈞𒈟</div>
<div class="line">𒈠𒈡𒈢𒈣𒈤𒈥𒈦𒈧𒈨𒈩𒈪𒈫𒈬𒈭𒈮𒈯𒈰𒈱𒈲𒈳𒈴𒈵𒈶𒈷𒈸𒈹𒈺𒈻𒈼𒈽𒈾𒈿</div>
<div class="line">𒉀𒉁𒉂𒉃𒉄𒉅𒉆𒉇𒉈𒉉𒉊𒉋𒉌𒉍𒉎𒉏𒉐𒉑𒉒𒉓𒉔𒉕𒉖𒉗𒉘𒉙𒉚𒉛𒉜𒉝𒉞𒉟</div>
<div class="line">𒉠𒉡𒉢𒉣𒉤𒉥𒉦𒉧𒉨𒉩𒉪𒉫𒉬𒉭𒉮𒉯𒉰𒉱𒉲𒉳𒉴𒉵𒉶𒉷𒉸𒉹𒉺𒉻𒉼𒉽𒉾𒉿</div>
<div class="line">𒊀𒊁𒊂𒊃𒊄𒊅𒊆𒊇𒊈𒊉𒊊𒊋𒊌𒊍𒊎𒊏𒊐𒊑𒊒𒊓𒊔𒊕𒊖𒊗𒊘𒊙𒊚𒊛𒊜𒊝𒊞𒊟</div>
<div class="line">𒊠𒊡𒊢𒊣𒊤𒊥𒊦𒊧𒊨𒊩𒊪𒊫𒊬𒊭𒊮𒊯𒊰𒊱𒊲𒊳𒊴𒊵𒊶𒊷𒊸𒊹𒊺𒊻𒊼𒊽𒊾𒊿</div>
<div class="line">𒋀𒋁𒋂𒋃𒋄𒋅𒋆𒋇𒋈𒋉𒋊𒋋𒋌𒋍𒋎𒋏𒋐𒋑𒋒𒋓𒋔𒋕𒋖𒋗𒋘𒋙𒋚𒋛𒋜𒋝𒋞𒋟</div>
<div class="line">𒋠𒋡𒋢𒋣𒋤𒋥𒋦𒋧𒋨𒋩𒋪𒋫𒋬𒋭𒋮𒋯𒋰𒋱𒋲𒋳𒋴𒋵𒋶𒋷𒋸𒋹𒋺𒋻𒋼𒋽𒋾𒋿</div>
<div class="line">𒌀𒌁𒌂𒌃𒌄𒌅𒌆𒌇𒌈𒌉𒌊𒌋𒌌𒌍𒌎𒌏𒌐𒌑𒌒𒌓𒌔𒌕𒌖𒌗𒌘𒌙𒌚𒌛𒌜𒌝𒌞𒌟</div>
<div class="line">𒌠𒌡𒌢𒌣𒌤𒌥𒌦𒌧𒌨𒌩𒌪𒌫𒌬𒌭𒌮𒌯𒌰𒌱𒌲𒌳𒌴𒌵𒌶𒌷𒌸𒌹𒌺𒌻𒌼𒌽𒌾𒌿</div>
<div class="line">𒍀𒍁𒍂𒍃𒍄𒍅𒍆𒍇𒍈𒍉𒍊𒍋𒍌𒍍𒍎𒍏𒍐𒍑𒍒𒍓𒍔𒍕𒍖𒍗𒍘𒍙𒍚𒍛𒍜𒍝𒍞𒍟</div>
<div class="line">𒍠𒍡𒍢𒍣𒍤𒍥𒍦𒍧𒍨𒍩𒍪𒍫𒍬𒍭𒍮𒍯𒍰𒍱𒍲𒍳𒍴𒍵𒍶𒍷𒍸𒍹𒍺𒍻𒍼𒍽𒍾𒍿</div>
<div class="line">𒎀𒎁𒎂𒎃𒎄𒎅𒎆𒎇𒎈𒎉𒎊𒎋𒎌𒎍𒎎𒎏𒎐𒎑𒎒𒎓𒎔𒎕𒎖𒎗𒎘𒐀𒐁𒐂𒐃𒐄𒐅𒐆</div>
<div class="line">𒐇𒐈𒐉𒐊𒐋𒐌𒐍𒐎𒐏𒐐𒐑𒐒𒐓𒐔𒐕𒐖𒐗𒐘𒐙𒐚𒐛𒐜𒐝𒐞𒐟𒐠𒐡𒐢𒐣𒐤𒐥𒐦</div>
<div class="line">𒐧𒐨𒐩𒐪𒐫𒐬𒐭𒐮𒐯𒐰𒐱𒐲𒐳𒐴𒐵𒐶𒐷𒐸𒐹𒐺𒐻𒐼𒐽𒐾𒐿𒑀𒑁𒑂𒑃𒑄𒑅𒑆</div>
<div class="line">𒑇𒑈𒑉𒑊𒑋𒑌𒑍𒑎𒑏𒑐𒑑𒑒𒑓𒑔𒑕𒑖𒑗𒑘𒑙𒑚𒑛𒑜𒑝𒑞𒑟𒑠𒑡𒑢𒑣𒑤𒑥𒑦</div>
<div class="line">𒑧𒑨𒑩𒑪𒑫𒑬𒑭𒑮𒑰𒑱𒑲𒑳𒑴</div>
</div>
<div data-block="Bamum">
<div class="line">𖠀𖠁𖠂𖠃𖠄𖠅𖠆𖠇𖠈𖠉𖠊𖠋𖠌𖠍𖠎𖠏𖠐𖠑𖠒𖠓𖠔𖠕𖠖𖠗𖠘𖠙𖠚𖠛𖠜𖠝𖠞𖠟</div>
<div class="line">𖠠𖠡𖠢𖠣𖠤𖠥𖠦𖠧𖠨𖠩𖠪𖠫𖠬𖠭𖠮𖠯𖠰𖠱𖠲𖠳𖠴𖠵𖠶𖠷𖠸𖠹𖠺𖠻𖠼𖠽𖠾𖠿</div>
<div class="line">𖡀𖡁𖡂𖡃𖡄𖡅𖡆𖡇𖡈𖡉𖡊𖡋𖡌𖡍𖡎𖡏𖡐𖡑𖡒𖡓𖡔𖡕𖡖𖡗𖡘𖡙𖡚𖡛𖡜𖡝𖡞𖡟</div>
<div class="line">𖡠𖡡𖡢𖡣𖡤𖡥𖡦𖡧𖡨𖡩𖡪𖡫𖡬𖡭𖡮𖡯𖡰𖡱𖡲𖡳𖡴𖡵𖡶𖡷𖡸𖡹𖡺𖡻𖡼𖡽𖡾𖡿</div>
<div class="line">𖢀𖢁𖢂𖢃𖢄𖢅𖢆𖢇𖢈𖢉𖢊𖢋𖢌𖢍𖢎𖢏𖢐𖢑𖢒𖢓𖢔𖢕𖢖𖢗𖢘𖢙𖢚𖢛𖢜𖢝𖢞𖢟</div>
<div class="line">𖢠𖢡𖢢𖢣𖢤𖢥𖢦𖢧𖢨𖢩𖢪𖢫𖢬𖢭𖢮𖢯𖢰𖢱𖢲𖢳𖢴𖢵𖢶𖢷𖢸𖢹𖢺𖢻𖢼𖢽𖢾𖢿</div>
<div class="line">𖣀𖣁𖣂𖣃𖣄𖣅𖣆𖣇𖣈𖣉𖣊𖣋𖣌𖣍𖣎𖣏𖣐𖣑𖣒𖣓𖣔𖣕𖣖𖣗𖣘𖣙𖣚𖣛𖣜𖣝𖣞𖣟</div>
<div class="line">𖣠𖣡𖣢𖣣𖣤𖣥𖣦𖣧𖣨𖣩𖣪𖣫𖣬𖣭𖣮𖣯𖣰𖣱𖣲𖣳𖣴𖣵𖣶𖣷𖣸𖣹𖣺𖣻𖣼𖣽𖣾𖣿</div>
<div class="line">𖤀𖤁𖤂𖤃𖤄𖤅𖤆𖤇𖤈𖤉𖤊𖤋𖤌𖤍𖤎𖤏𖤐𖤑𖤒𖤓𖤔𖤕𖤖𖤗𖤘𖤙𖤚𖤛𖤜𖤝𖤞𖤟</div>
<div class="line">𖤠𖤡𖤢𖤣𖤤𖤥𖤦𖤧𖤨𖤩𖤪𖤫𖤬𖤭𖤮𖤯𖤰𖤱𖤲𖤳𖤴𖤵𖤶𖤷𖤸𖤹𖤺𖤻𖤼𖤽𖤾𖤿</div>
<div class="line">𖥀𖥁𖥂𖥃𖥄𖥅𖥆𖥇𖥈𖥉𖥊𖥋𖥌𖥍𖥎𖥏𖥐𖥑𖥒𖥓𖥔𖥕𖥖𖥗𖥘𖥙𖥚𖥛𖥜𖥝𖥞𖥟</div>
<div class="line">𖥠𖥡𖥢𖥣𖥤𖥥𖥦𖥧𖥨𖥩𖥪𖥫𖥬𖥭𖥮𖥯𖥰𖥱𖥲𖥳𖥴𖥵𖥶𖥷𖥸𖥹𖥺𖥻𖥼𖥽𖥾𖥿</div>
<div class="line">𖦀𖦁𖦂𖦃𖦄𖦅𖦆𖦇𖦈𖦉𖦊𖦋𖦌𖦍𖦎𖦏𖦐𖦑𖦒𖦓𖦔𖦕𖦖𖦗𖦘𖦙𖦚𖦛𖦜𖦝𖦞𖦟</div>
<div class="line">𖦠𖦡𖦢𖦣𖦤𖦥𖦦𖦧𖦨𖦩𖦪𖦫𖦬𖦭𖦮𖦯𖦰𖦱𖦲𖦳𖦴𖦵𖦶𖦷𖦸𖦹𖦺𖦻𖦼𖦽𖦾𖦿</div>
<div class="line">𖧀𖧁𖧂𖧃𖧄𖧅𖧆𖧇𖧈𖧉𖧊𖧋𖧌𖧍𖧎𖧏𖧐𖧑𖧒𖧓𖧔𖧕𖧖𖧗𖧘𖧙𖧚𖧛𖧜𖧝𖧞𖧟</div>
<div class="line">𖧠𖧡𖧢𖧣𖧤𖧥𖧦𖧧𖧨𖧩𖧪𖧫𖧬𖧭𖧮𖧯𖧰𖧱𖧲𖧳𖧴𖧵𖧶𖧷𖧸𖧹𖧺𖧻𖧼𖧽𖧾𖧿</div>
<div class="line">𖨀𖨁𖨂𖨃𖨄𖨅𖨆𖨇𖨈𖨉𖨊𖨋𖨌𖨍𖨎𖨏𖨐𖨑𖨒𖨓𖨔𖨕𖨖𖨗𖨘𖨙𖨚𖨛𖨜𖨝𖨞𖨟</div>
<div class="line">𖨠𖨡𖨢𖨣𖨤𖨥𖨦𖨧𖨨𖨩𖨪𖨫𖨬𖨭𖨮𖨯𖨰𖨱𖨲𖨳𖨴𖨵𖨶𖨷𖨸</div>
</div>
<div data-block="Mro">
<div class="line">𖩀𖩁𖩂𖩃𖩄𖩅𖩆𖩇𖩈𖩉𖩊𖩋𖩌𖩍𖩎𖩏𖩐𖩑𖩒𖩓𖩔𖩕𖩖𖩗𖩘𖩙𖩚𖩛𖩜𖩝𖩞𖩠</div>
<div class="line">𖩡𖩢𖩣𖩤𖩥𖩦𖩧𖩨𖩩𖩮𖩯</div>
</div>
<div data-block="Bassa">
<div class="line">𖫐𖫑𖫒𖫓𖫔𖫕𖫖𖫗𖫘𖫙𖫚𖫛𖫜𖫝𖫞𖫟𖫠𖫡𖫢𖫣𖫤𖫥𖫦𖫧𖫨𖫩𖫪𖫫𖫬𖫭𖫵</div>
</div>
<div data-block="Pahawh">
<div class="line">𖬀𖬁𖬂𖬃𖬄𖬅𖬆𖬇𖬈𖬉𖬊𖬋𖬌𖬍𖬎𖬏𖬐𖬑𖬒𖬓𖬔𖬕𖬖𖬗𖬘𖬙𖬚𖬛𖬜𖬝𖬞𖬟</div>
<div class="line">𖬠𖬡𖬢𖬣𖬤𖬥𖬦𖬧𖬨𖬩𖬪𖬫𖬬𖬭𖬮𖬯𖬷𖬸𖬹𖬺𖬻𖬼𖬽𖬾𖬿𖭀𖭁𖭂𖭃𖭄𖭅𖭐</div>
<div class="line">𖭑𖭒𖭓𖭔𖭕𖭖𖭗𖭘𖭙𖭛𖭜𖭝𖭞𖭟𖭠𖭡𖭣𖭤𖭥𖭦𖭧𖭨𖭩𖭪𖭫𖭬𖭭𖭮𖭯𖭰𖭱𖭲</div>
<div class="line">𖭳𖭴𖭵𖭶𖭷𖭽𖭾𖭿𖮀𖮁𖮂𖮃𖮄𖮅𖮆𖮇𖮈𖮉𖮊𖮋𖮌𖮍𖮎𖮏</div>
</div>
<div data-block="Miao">
<div class="line">𖼀𖼁𖼂𖼃𖼄𖼅𖼆𖼇𖼈𖼉𖼊𖼋𖼌𖼍𖼎𖼏𖼐𖼑𖼒𖼓𖼔𖼕𖼖𖼗𖼘𖼙𖼚𖼛𖼜𖼝𖼞𖼟</div>
<div class="line">𖼠𖼡𖼢𖼣𖼤𖼥𖼦𖼧𖼨𖼩𖼪𖼫𖼬𖼭𖼮𖼯𖼰𖼱𖼲𖼳𖼴𖼵𖼶𖼷𖼸𖼹𖼺𖼻𖼼𖼽𖼾𖼿</div>
<div class="line">𖽀𖽁𖽂𖽃𖽄𖽐𖾓𖾔𖾕𖾖𖾗𖾘𖾙𖾚𖾛𖾜𖾝𖾞𖾟</div>
</div>
<div data-block="Duployan">
<div class="line">𛰀𛰁𛰂𛰃𛰄𛰅𛰆𛰇𛰈𛰉𛰊𛰋𛰌𛰍𛰎𛰏𛰐𛰑𛰒𛰓𛰔𛰕𛰖𛰗𛰘𛰙𛰚𛰛𛰜𛰝𛰞𛰟</div>
<div class="line">𛰠𛰡𛰢𛰣𛰤𛰥𛰦𛰧𛰨𛰩𛰪𛰫𛰬𛰭𛰮𛰯𛰰𛰱𛰲𛰳𛰴𛰵𛰶𛰷𛰸𛰹𛰺𛰻𛰼𛰽𛰾𛰿</div>
<div class="line">𛱀𛱁𛱂𛱃𛱄𛱅𛱆𛱇𛱈𛱉𛱊𛱋𛱌𛱍𛱎𛱏𛱐𛱑𛱒𛱓𛱔𛱕𛱖𛱗𛱘𛱙𛱚𛱛𛱜𛱝𛱞𛱟</div>
<div class="line">𛱠𛱡𛱢𛱣𛱤𛱥𛱦𛱧𛱨𛱩𛱪𛱰𛱱𛱲𛱳𛱴𛱵𛱶𛱷𛱸𛱹𛱺𛱻𛱼𛲀𛲁𛲂𛲃𛲄𛲅𛲆𛲇</div>
<div class="line">𛲈𛲐𛲑𛲒𛲓𛲔𛲕𛲖𛲗𛲘𛲙𛲜𛲟</div>
</div>
<div data-block="Ancient">
<div class="line">𝈀𝈁𝈂𝈃𝈄𝈅𝈆𝈇𝈈𝈉𝈊𝈋𝈌𝈍𝈎𝈏𝈐𝈑𝈒𝈓𝈔𝈕𝈖𝈗𝈘𝈙𝈚𝈛𝈜𝈝𝈞𝈟</div>
<div class="line">𝈠𝈡𝈢𝈣𝈤𝈥𝈦𝈧𝈨𝈩𝈪𝈫𝈬𝈭𝈮𝈯𝈰𝈱𝈲𝈳𝈴𝈵𝈶𝈷𝈸𝈹𝈺𝈻𝈼𝈽𝈾𝈿</div>
<div class="line">𝉀𝉁𝉅</div>
</div>
<div data-block="Mathematical">
<div class="line">𝐀𝐁𝐂𝐃𝐄𝐅𝐆𝐇𝐈𝐉𝐊𝐋𝐌𝐍𝐎𝐏𝐐𝐑𝐒𝐓𝐔𝐕𝐖𝐗𝐘𝐙𝐚𝐛𝐜𝐝𝐞𝐟</div>
<div class="line">𝐠𝐡𝐢𝐣𝐤𝐥𝐦𝐧𝐨𝐩𝐪𝐫𝐬𝐭𝐮𝐯𝐰𝐱𝐲𝐳𝐴𝐵𝐶𝐷𝐸𝐹𝐺𝐻𝐼𝐽𝐾𝐿</div>
<div class="line">𝑀𝑁𝑂𝑃𝑄𝑅𝑆𝑇𝑈𝑉𝑊𝑋𝑌𝑍𝑎𝑏𝑐𝑑𝑒𝑓𝑔𝑖𝑗𝑘𝑙𝑚𝑛𝑜𝑝𝑞𝑟𝑠</div>
<div class="line">𝑡𝑢𝑣𝑤𝑥𝑦𝑧𝑨𝑩𝑪𝑫𝑬𝑭𝑮𝑯𝑰𝑱𝑲𝑳𝑴𝑵𝑶𝑷𝑸𝑹𝑺𝑻𝑼𝑽𝑾𝑿𝒀</div>
<div class="line">𝒁𝒂𝒃𝒄𝒅𝒆𝒇𝒈𝒉𝒊𝒋𝒌𝒍𝒎𝒏𝒐𝒑𝒒𝒓𝒔𝒕𝒖𝒗𝒘𝒙𝒚𝒛𝒜𝒞𝒟𝒢𝒥</div>
<div class="line">𝒦𝒩𝒪𝒫𝒬𝒮𝒯𝒰𝒱𝒲𝒳𝒴𝒵𝒶𝒷𝒸𝒹𝒻𝒽𝒾𝒿𝓀𝓁𝓂𝓃𝓅𝓆𝓇𝓈𝓉𝓊𝓋</div>
<div class="line">𝓌𝓍𝓎𝓏𝓐𝓑𝓒𝓓𝓔𝓕𝓖𝓗𝓘𝓙𝓚𝓛𝓜𝓝𝓞𝓟𝓠𝓡𝓢𝓣𝓤𝓥𝓦𝓧𝓨𝓩𝓪𝓫</div>
<div class="line">𝓬𝓭𝓮𝓯𝓰𝓱𝓲𝓳𝓴𝓵𝓶𝓷𝓸𝓹𝓺𝓻𝓼𝓽𝓾𝓿𝔀𝔁𝔂𝔃𝔄𝔅𝔇𝔈𝔉𝔊𝔍𝔎</div>
<div class="line">𝔏𝔐𝔑𝔒𝔓𝔔𝔖𝔗𝔘𝔙𝔚𝔛𝔜𝔞𝔟𝔠𝔡𝔢𝔣𝔤𝔥𝔦𝔧𝔨𝔩𝔪𝔫𝔬𝔭𝔮𝔯𝔰</div>
<div class="line">𝔱𝔲𝔳𝔴𝔵𝔶𝔷𝔸𝔹𝔻𝔼𝔽𝔾𝕀𝕁𝕂𝕃𝕄𝕆𝕊𝕋𝕌𝕍𝕎𝕏𝕐𝕒𝕓𝕔𝕕𝕖𝕗</div>
<div class="line">𝕘𝕙𝕚𝕛𝕜𝕝𝕞𝕟𝕠𝕡𝕢𝕣𝕤𝕥𝕦𝕧𝕨𝕩𝕪𝕫𝕬𝕭𝕮𝕯𝕰𝕱𝕲𝕳𝕴𝕵𝕶𝕷</div>
<div class="line">𝕸𝕹𝕺𝕻𝕼𝕽𝕾𝕿𝖀𝖁𝖂𝖃𝖄𝖅𝖆𝖇𝖈𝖉𝖊𝖋𝖌𝖍𝖎𝖏𝖐𝖑𝖒𝖓𝖔𝖕𝖖𝖗</div>
<div class="line">𝖘𝖙𝖚𝖛𝖜𝖝𝖞𝖟𝖠𝖡𝖢𝖣𝖤𝖥𝖦𝖧𝖨𝖩𝖪𝖫𝖬𝖭𝖮𝖯𝖰𝖱𝖲𝖳𝖴𝖵𝖶𝖷</div>
<div class="line">𝖸𝖹𝖺𝖻𝖼𝖽𝖾𝖿𝗀𝗁𝗂𝗃𝗄𝗅𝗆𝗇𝗈𝗉𝗊𝗋𝗌𝗍𝗎𝗏𝗐𝗑𝗒𝗓𝗔𝗕𝗖𝗗</div>
<div class="line">𝗘𝗙𝗚𝗛𝗜𝗝𝗞𝗟𝗠𝗡𝗢𝗣𝗤𝗥𝗦𝗧𝗨𝗩𝗪𝗫𝗬𝗭𝗮𝗯𝗰𝗱𝗲𝗳𝗴𝗵𝗶𝗷</div>
<div class="line">𝗸𝗹𝗺𝗻𝗼𝗽𝗾𝗿𝘀𝘁𝘂𝘃𝘄𝘅𝘆𝘇𝘈𝘉𝘊𝘋𝘌𝘍𝘎𝘏𝘐𝘑𝘒𝘓𝘔𝘕𝘖𝘗</div>
<div class="line">𝘘𝘙𝘚𝘛𝘜𝘝𝘞𝘟𝘠𝘡𝘢𝘣𝘤𝘥𝘦𝘧𝘨𝘩𝘪𝘫𝘬𝘭𝘮𝘯𝘰𝘱𝘲𝘳𝘴𝘵𝘶𝘷</div>
<div class="line">𝘸𝘹𝘺𝘻𝘼𝘽𝘾𝘿𝙀𝙁𝙂𝙃𝙄𝙅𝙆𝙇𝙈𝙉𝙊𝙋𝙌𝙍𝙎𝙏𝙐𝙑𝙒𝙓𝙔𝙕𝙖𝙗</div>
<div class="line">𝙘𝙙𝙚𝙛𝙜𝙝𝙞𝙟𝙠𝙡𝙢𝙣𝙤𝙥𝙦𝙧𝙨𝙩𝙪𝙫𝙬𝙭𝙮𝙯𝙰𝙱𝙲𝙳𝙴𝙵𝙶𝙷</div>
<div class="line">𝙸𝙹𝙺𝙻𝙼𝙽𝙾𝙿𝚀𝚁𝚂𝚃𝚄𝚅𝚆𝚇𝚈𝚉𝚊𝚋𝚌𝚍𝚎𝚏𝚐𝚑𝚒𝚓𝚔𝚕𝚖𝚗</div>
<div class="line">𝚘𝚙𝚚𝚛𝚜𝚝𝚞𝚟𝚠𝚡𝚢𝚣𝚤𝚥𝚨𝚩𝚪𝚫𝚬𝚭𝚮𝚯𝚰𝚱𝚲𝚳𝚴𝚵𝚶𝚷𝚸𝚹</div>
<div class="line">𝚺𝚻𝚼𝚽𝚾𝚿𝛀𝛁𝛂𝛃𝛄𝛅𝛆𝛇𝛈𝛉𝛊𝛋𝛌𝛍𝛎𝛏𝛐𝛑𝛒𝛓𝛔𝛕𝛖𝛗𝛘𝛙</div>
<div class="line">𝛚𝛛𝛜𝛝𝛞𝛟𝛠𝛡𝛢𝛣𝛤𝛥𝛦𝛧𝛨𝛩𝛪𝛫𝛬𝛭𝛮𝛯𝛰𝛱𝛲𝛳𝛴𝛵𝛶𝛷𝛸𝛹</div>
<div class="line">𝛺𝛻𝛼𝛽𝛾𝛿𝜀𝜁𝜂𝜃𝜄𝜅𝜆𝜇𝜈𝜉𝜊𝜋𝜌𝜍𝜎𝜏𝜐𝜑𝜒𝜓𝜔𝜕𝜖𝜗𝜘𝜙</div>
<div class="line">𝜚𝜛𝜜𝜝𝜞𝜟𝜠𝜡𝜢𝜣𝜤𝜥𝜦𝜧𝜨𝜩𝜪𝜫𝜬𝜭𝜮𝜯𝜰𝜱𝜲𝜳𝜴𝜵𝜶𝜷𝜸𝜹</div>
<div class="line">𝜺𝜻𝜼𝜽𝜾𝜿𝝀𝝁𝝂𝝃𝝄𝝅𝝆𝝇𝝈𝝉𝝊𝝋𝝌𝝍𝝎𝝏𝝐𝝑𝝒𝝓𝝔𝝕𝝖𝝗𝝘𝝙</div>
<div class="line">𝝚𝝛𝝜𝝝𝝞𝝟𝝠𝝡𝝢𝝣𝝤𝝥𝝦𝝧𝝨𝝩𝝪𝝫𝝬𝝭𝝮𝝯𝝰𝝱𝝲𝝳𝝴𝝵𝝶𝝷𝝸𝝹</div>
<div class="line">𝝺𝝻𝝼𝝽𝝾𝝿𝞀𝞁𝞂𝞃𝞄𝞅𝞆𝞇𝞈𝞉𝞊𝞋𝞌𝞍𝞎𝞏𝞐𝞑𝞒𝞓𝞔𝞕𝞖𝞗𝞘𝞙</div>
<div class="line">𝞚𝞛𝞜𝞝𝞞𝞟𝞠𝞡𝞢𝞣𝞤𝞥𝞦𝞧𝞨𝞩𝞪𝞫𝞬𝞭𝞮𝞯𝞰𝞱𝞲𝞳𝞴𝞵𝞶𝞷𝞸𝞹</div>
<div class="line">𝞺𝞻𝞼𝞽𝞾𝞿𝟀𝟁𝟂𝟃𝟄𝟅𝟆𝟇𝟈𝟉𝟊𝟋𝟎𝟏𝟐𝟑𝟒𝟓𝟔𝟕𝟖𝟗𝟘𝟙𝟚𝟛</div>
<div class="line">𝟜𝟝𝟞𝟟𝟠𝟡𝟢𝟣𝟤𝟥𝟦𝟧𝟨𝟩𝟪𝟫𝟬𝟭𝟮𝟯𝟰𝟱𝟲𝟳𝟴𝟵𝟶𝟷𝟸𝟹𝟺𝟻</div>
<div class="line">𝟼𝟽𝟾𝟿</div>
</div>
<div data-block="Arabic">
<div class="line">𞸀𞸁𞸂𞸃𞸅𞸆𞸇𞸈𞸉𞸊𞸋𞸌𞸍𞸎𞸏𞸐𞸑𞸒𞸓𞸔𞸕𞸖𞸗𞸘𞸙𞸚𞸛𞸜𞸝𞸞𞸟𞸡</div>
<div class="line">𞸢𞸤𞸧𞸩𞸪𞸫𞸬𞸭𞸮𞸯𞸰𞸱𞸲𞸴𞸵𞸶𞸷𞸹𞸻𞹂𞹇𞹉𞹋𞹍𞹎𞹏𞹑𞹒𞹔𞹗𞹙𞹛</div>
<div class="line">𞹝𞹟𞹡𞹢𞹤𞹧𞹨𞹩𞹪𞹬𞹭𞹮𞹯𞹰𞹱𞹲𞹴𞹵𞹶𞹷𞹹𞹺𞹻𞹼𞹾𞺀𞺁𞺂𞺃𞺄𞺅𞺆</div>
<div class="line">𞺇𞺈𞺉𞺋𞺌𞺍𞺎𞺏𞺐𞺑𞺒𞺓𞺔𞺕𞺖𞺗𞺘𞺙𞺚𞺛𞺡𞺢𞺣𞺥𞺦𞺧𞺨𞺩𞺫𞺬𞺭𞺮</div>
<div class="line">𞺯𞺰𞺱𞺲𞺳𞺴𞺵𞺶𞺷𞺸𞺹𞺺𞺻𞻰𞻱</div>
</div>
<div data-block="Mende">
<div class="line">𞠀𞠁𞠂𞠃𞠄𞠅𞠆𞠇𞠈𞠉𞠊𞠋𞠌𞠍𞠎𞠏𞠐𞠑𞠒𞠓𞠔𞠕𞠖𞠗𞠘𞠙𞠚𞠛𞠜𞠝𞠞𞠟</div>
<div class="line">𞠠𞠡𞠢𞠣𞠤𞠥𞠦𞠧𞠨𞠩𞠪𞠫𞠬𞠭𞠮𞠯𞠰𞠱𞠲𞠳𞠴𞠵𞠶𞠷𞠸𞠹𞠺𞠻𞠼𞠽𞠾𞠿</div>
<div class="line">𞡀𞡁𞡂𞡃𞡄𞡅𞡆𞡇𞡈𞡉𞡊𞡋𞡌𞡍𞡎𞡏𞡐𞡑𞡒𞡓𞡔𞡕𞡖𞡗𞡘𞡙𞡚𞡛𞡜𞡝𞡞𞡟</div>
<div class="line">𞡠𞡡𞡢𞡣𞡤𞡥𞡦𞡧𞡨𞡩𞡪𞡫𞡬𞡭𞡮𞡯𞡰𞡱𞡲𞡳𞡴𞡵𞡶𞡷𞡸𞡹𞡺𞡻𞡼𞡽𞡾𞡿</div>
<div class="line">𞢀𞢁𞢂𞢃𞢄𞢅𞢆𞢇𞢈𞢉𞢊𞢋𞢌𞢍𞢎𞢏𞢐𞢑𞢒𞢓𞢔𞢕𞢖𞢗𞢘𞢙𞢚𞢛𞢜𞢝𞢞𞢟</div>
<div class="line">𞢠𞢡𞢢𞢣𞢤𞢥𞢦𞢧𞢨𞢩𞢪𞢫𞢬𞢭𞢮𞢯𞢰𞢱𞢲𞢳𞢴𞢵𞢶𞢷𞢸𞢹𞢺𞢻𞢼𞢽𞢾𞢿</div>
<div class="line">𞣀𞣁𞣂𞣃𞣄𞣇𞣈𞣉𞣊𞣋𞣌𞣍𞣎𞣏</div>
</div>
<div data-block="Supplemental">
<div class="line">🠀🠁🠂🠃🠄🠅🠆🠇🠈🠉🠊🠋🠐🠑🠒🠓🠔🠕🠖🠗🠘🠙🠚🠛🠜🠝🠞🠟🠠🠡🠢🠣</div>
<div class="line">🠤🠥🠦🠧🠨🠩🠪🠫🠬🠭🠮🠯🠰🠱🠲🠳🠴🠵🠶🠷🠸🠹🠺🠻🠼🠽🠾🠿🡀🡁🡂🡃</div>
<div class="line">🡄🡅🡆🡇🡐🡑🡒🡓🡔🡕🡖🡗🡘🡙🡠🡡🡢🡣🡤🡥🡦🡧🡨🡩🡪🡫🡬🡭🡮🡯🡰🡱</div>
<div class="line">🡲🡳🡴🡵🡶🡷🡸🡹🡺🡻🡼🡽🡾🡿🢀🢁🢂🢃🢄🢅🢆🢇🢐🢑🢒🢓🢔🢕🢖🢗🢘🢙</div>
<div class="line">🢚🢛🢜🢝🢞🢟🢠🢡🢢🢣🢤🢥🢦🢧🢨🢩🢪🢫🢬🢭</div>
</div>
</div>
<div data-vo="U" class="test">
<div data-block="Latin">
<div class="line">§©®±¼½¾×÷</div>
</div>
<div data-block="Spacing">
<div class="line">˪˫</div>
</div>
<div data-block="Hangul">
<div class="line">ᄀᄁᄂᄃᄄᄅᄆᄇᄈᄉᄊᄋᄌᄍᄎᄏᄐᄑᄒᄓᄔᄕᄖᄗᄘᄙᄚᄛᄜᄝᄞᄟ</div>
<div class="line">ᄠᄡᄢᄣᄤᄥᄦᄧᄨᄩᄪᄫᄬᄭᄮᄯᄰᄱᄲᄳᄴᄵᄶᄷᄸᄹᄺᄻᄼᄽᄾᄿ</div>
<div class="line">ᅀᅁᅂᅃᅄᅅᅆᅇᅈᅉᅊᅋᅌᅍᅎᅏᅐᅑᅒᅓᅔᅕᅖᅗᅘᅙᅚᅛᅜᅝᅞᅟ</div>
<div class="line">ᅠᅡᅢᅣᅤᅥᅦᅧᅨᅩᅪᅫᅬᅭᅮᅯᅰᅱᅲᅳᅴᅵᅶᅷᅸᅹᅺᅻᅼᅽᅾᅿ</div>
<div class="line">ᆀᆁᆂᆃᆄᆅᆆᆇᆈᆉᆊᆋᆌᆍᆎᆏᆐᆑᆒᆓᆔᆕᆖᆗᆘᆙᆚᆛᆜᆝᆞᆟ</div>
<div class="line">ᆠᆡᆢᆣᆤᆥᆦᆧᆨᆩᆪᆫᆬᆭᆮᆯᆰᆱᆲᆳᆴᆵᆶᆷᆸᆹᆺᆻᆼᆽᆾᆿ</div>
<div class="line">ᇀᇁᇂᇃᇄᇅᇆᇇᇈᇉᇊᇋᇌᇍᇎᇏᇐᇑᇒᇓᇔᇕᇖᇗᇘᇙᇚᇛᇜᇝᇞᇟ</div>
<div class="line">ᇠᇡᇢᇣᇤᇥᇦᇧᇨᇩᇪᇫᇬᇭᇮᇯᇰᇱᇲᇳᇴᇵᇶᇷᇸᇹᇺᇻᇼᇽᇾᇿ</div>
</div>
<div data-block="Unified">
<div class="line">ᐁᐂᐃᐄᐅᐆᐇᐈᐉᐊᐋᐌᐍᐎᐏᐐᐑᐒᐓᐔᐕᐖᐗᐘᐙᐚᐛᐜᐝᐞᐟᐠ</div>
<div class="line">ᐡᐢᐣᐤᐥᐦᐧᐨᐩᐪᐫᐬᐭᐮᐯᐰᐱᐲᐳᐴᐵᐶᐷᐸᐹᐺᐻᐼᐽᐾᐿᑀ</div>
<div class="line">ᑁᑂᑃᑄᑅᑆᑇᑈᑉᑊᑋᑌᑍᑎᑏᑐᑑᑒᑓᑔᑕᑖᑗᑘᑙᑚᑛᑜᑝᑞᑟᑠ</div>
<div class="line">ᑡᑢᑣᑤᑥᑦᑧᑨᑩᑪᑫᑬᑭᑮᑯᑰᑱᑲᑳᑴᑵᑶᑷᑸᑹᑺᑻᑼᑽᑾᑿᒀ</div>
<div class="line">ᒁᒂᒃᒄᒅᒆᒇᒈᒉᒊᒋᒌᒍᒎᒏᒐᒑᒒᒓᒔᒕᒖᒗᒘᒙᒚᒛᒜᒝᒞᒟᒠ</div>
<div class="line">ᒡᒢᒣᒤᒥᒦᒧᒨᒩᒪᒫᒬᒭᒮᒯᒰᒱᒲᒳᒴᒵᒶᒷᒸᒹᒺᒻᒼᒽᒾᒿᓀ</div>
<div class="line">ᓁᓂᓃᓄᓅᓆᓇᓈᓉᓊᓋᓌᓍᓎᓏᓐᓑᓒᓓᓔᓕᓖᓗᓘᓙᓚᓛᓜᓝᓞᓟᓠ</div>
<div class="line">ᓡᓢᓣᓤᓥᓦᓧᓨᓩᓪᓫᓬᓭᓮᓯᓰᓱᓲᓳᓴᓵᓶᓷᓸᓹᓺᓻᓼᓽᓾᓿᔀ</div>
<div class="line">ᔁᔂᔃᔄᔅᔆᔇᔈᔉᔊᔋᔌᔍᔎᔏᔐᔑᔒᔓᔔᔕᔖᔗᔘᔙᔚᔛᔜᔝᔞᔟᔠ</div>
<div class="line">ᔡᔢᔣᔤᔥᔦᔧᔨᔩᔪᔫᔬᔭᔮᔯᔰᔱᔲᔳᔴᔵᔶᔷᔸᔹᔺᔻᔼᔽᔾᔿᕀ</div>
<div class="line">ᕁᕂᕃᕄᕅᕆᕇᕈᕉᕊᕋᕌᕍᕎᕏᕐᕑᕒᕓᕔᕕᕖᕗᕘᕙᕚᕛᕜᕝᕞᕟᕠ</div>
<div class="line">ᕡᕢᕣᕤᕥᕦᕧᕨᕩᕪᕫᕬᕭᕮᕯᕰᕱᕲᕳᕴᕵᕶᕷᕸᕹᕺᕻᕼᕽᕾᕿᖀ</div>
<div class="line">ᖁᖂᖃᖄᖅᖆᖇᖈᖉᖊᖋᖌᖍᖎᖏᖐᖑᖒᖓᖔᖕᖖᖗᖘᖙᖚᖛᖜᖝᖞᖟᖠ</div>
<div class="line">ᖡᖢᖣᖤᖥᖦᖧᖨᖩᖪᖫᖬᖭᖮᖯᖰᖱᖲᖳᖴᖵᖶᖷᖸᖹᖺᖻᖼᖽᖾᖿᗀ</div>
<div class="line">ᗁᗂᗃᗄᗅᗆᗇᗈᗉᗊᗋᗌᗍᗎᗏᗐᗑᗒᗓᗔᗕᗖᗗᗘᗙᗚᗛᗜᗝᗞᗟᗠ</div>
<div class="line">ᗡᗢᗣᗤᗥᗦᗧᗨᗩᗪᗫᗬᗭᗮᗯᗰᗱᗲᗳᗴᗵᗶᗷᗸᗹᗺᗻᗼᗽᗾᗿᘀ</div>
<div class="line">ᘁᘂᘃᘄᘅᘆᘇᘈᘉᘊᘋᘌᘍᘎᘏᘐᘑᘒᘓᘔᘕᘖᘗᘘᘙᘚᘛᘜᘝᘞᘟᘠ</div>
<div class="line">ᘡᘢᘣᘤᘥᘦᘧᘨᘩᘪᘫᘬᘭᘮᘯᘰᘱᘲᘳᘴᘵᘶᘷᘸᘹᘺᘻᘼᘽᘾᘿᙀ</div>
<div class="line">ᙁᙂᙃᙄᙅᙆᙇᙈᙉᙊᙋᙌᙍᙎᙏᙐᙑᙒᙓᙔᙕᙖᙗᙘᙙᙚᙛᙜᙝᙞᙟᙠ</div>
<div class="line">ᙡᙢᙣᙤᙥᙦᙧᙨᙩᙪᙫᙬ᙭᙮ᙯᙰᙱᙲᙳᙴᙵᙶᙷᙸᙹᙺᙻᙼᙽᙾᙿᢰ</div>
<div class="line">ᢱᢲᢳᢴᢵᢶᢷᢸᢹᢺᢻᢼᢽᢾᢿᣀᣁᣂᣃᣄᣅᣆᣇᣈᣉᣊᣋᣌᣍᣎᣏᣐ</div>
<div class="line">ᣑᣒᣓᣔᣕᣖᣗᣘᣙᣚᣛᣜᣝᣞᣟᣠᣡᣢᣣᣤᣥᣦᣧᣨᣩᣪᣫᣬᣭᣮᣯᣰ</div>
<div class="line">ᣱᣲᣳᣴᣵ</div>
</div>
<div data-block="General">
<div class="line">‖†‡‰‱※‼⁂⁇⁈⁉⁑</div>
</div>
<div data-block="Letterlike">
<div class="line">℀℁℃℄℅℆ℇ℈℉ℏℓ℔№℗℞℟℠℡™℣℥℧℩℮ℵℶℷℸℹ℺℻ℼ</div>
<div class="line">ℽℾℿⅅⅆⅇⅈⅉ⅊⅌⅍⅏</div>
</div>
<div data-block="Number">
<div class="line">⅐⅑⅒⅓⅔⅕⅖⅗⅘⅙⅚⅛⅜⅝⅞⅟ⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩⅪⅫⅬⅭⅮⅯ</div>
<div class="line">ⅰⅱⅲⅳⅴⅵⅶⅷⅸⅹⅺⅻⅼⅽⅾⅿↀↁↂↃↄↅↆↇↈ↉</div>
</div>
<div data-block="Mathematical">
<div class="line">∞∴∵</div>
</div>
<div data-block="Miscellaneous">
<div class="line">⌀⌁⌂⌃⌄⌅⌆⌇⌌⌍⌎⌏⌐⌑⌒⌓⌔⌕⌖⌗⌘⌙⌚⌛⌜⌝⌞⌟⌤⌥⌦⌧</div>
<div class="line">⌨⌫⍽⍾⍿⎀⎁⎂⎃⎄⎅⎆⎇⎈⎉⎊⎋⎌⎍⎎⎏⎐⎑⎒⎓⎔⎕⎖⎗⎘⎙⎚</div>
<div class="line">⎾⎿⏀⏁⏂⏃⏄⏅⏆⏇⏈⏉⏊⏋⏌⏍⏏⏑⏒⏓⏔⏕⏖⏗⏘⏙⏚⏛⏢⏣⏤⏥</div>
<div class="line">⏦⏧⏨⏩⏪⏫⏬⏭⏮⏯⏰⏱⏲⏳⏴⏵⏶⏷⏸⏹⏺</div>
</div>
<div data-block="Control">
<div class="line">␀␁␂␃␄␅␆␇␈␉␊␋␌␍␎␏␐␑␒␓␔␕␖␗␘␙␚␛␜␝␞␟</div>
<div class="line">␠␡␢␤␥␦</div>
</div>
<div data-block="Optical">
<div class="line">⑀⑁⑂⑃⑄⑅⑆⑇⑈⑉⑊</div>
</div>
<div data-block="Enclosed">
<div class="line">①②③④⑤⑥⑦⑧⑨⑩⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳⑴⑵⑶⑷⑸⑹⑺⑻⑼⑽⑾⑿</div>
<div class="line">⒀⒁⒂⒃⒄⒅⒆⒇⒈⒉⒊⒋⒌⒍⒎⒏⒐⒑⒒⒓⒔⒕⒖⒗⒘⒙⒚⒛⒜⒝⒞⒟</div>
<div class="line">⒠⒡⒢⒣⒤⒥⒦⒧⒨⒩⒪⒫⒬⒭⒮⒯⒰⒱⒲⒳⒴⒵ⒶⒷⒸⒹⒺⒻⒼⒽⒾⒿ</div>
<div class="line">ⓀⓁⓂⓃⓄⓅⓆⓇⓈⓉⓊⓋⓌⓍⓎⓏⓐⓑⓒⓓⓔⓕⓖⓗⓘⓙⓚⓛⓜⓝⓞⓟ</div>
<div class="line">ⓠⓡⓢⓣⓤⓥⓦⓧⓨⓩ⓪⓫⓬⓭⓮⓯⓰⓱⓲⓳⓴⓵⓶⓷⓸⓹⓺⓻⓼⓽⓾⓿</div>
</div>
<div data-block="Geometric">
<div class="line">■□▢▣▤▥▦▧▨▩▪▫▬▭▮▯▰▱▲△▴▵▶▷▸▹►▻▼▽▾▿</div>
<div class="line">◀◁◂◃◄◅◆◇◈◉◊○◌◍◎●◐◑◒◓◔◕◖◗◘◙◚◛◜◝◞◟</div>
<div class="line">◠◡◢◣◤◥◦◧◨◩◪◫◬◭◮◯◰◱◲◳◴◵◶◷◸◹◺◻◼◽◾◿</div>
</div>
<div data-block="Miscellaneous">
<div class="line">☀☁☂☃☄★☆☇☈☉☊☋☌☍☎☏☐☑☒☓☔☕☖☗☘☙☠☡☢☣☤☥</div>
<div class="line">☦☧☨☩☪☫☬☭☮☯☰☱☲☳☴☵☶☷☸☹☺☻☼☽☾☿♀♁♂♃♄♅</div>
<div class="line">♆♇♈♉♊♋♌♍♎♏♐♑♒♓♔♕♖♗♘♙♚♛♜♝♞♟♠♡♢♣♤♥</div>
<div class="line">♦♧♨♩♪♫♬♭♮♯♰♱♲♳♴♵♶♷♸♹♺♻♼♽♾♿⚀⚁⚂⚃⚄⚅</div>
<div class="line">⚆⚇⚈⚉⚊⚋⚌⚍⚎⚏⚐⚑⚒⚓⚔⚕⚖⚗⚘⚙⚚⚛⚜⚝⚞⚟⚠⚡⚢⚣⚤⚥</div>
<div class="line">⚦⚧⚨⚩⚪⚫⚬⚭⚮⚯⚰⚱⚲⚳⚴⚵⚶⚷⚸⚹⚺⚻⚼⚽⚾⚿⛀⛁⛂⛃⛄⛅</div>
<div class="line">⛆⛇⛈⛉⛊⛋⛌⛍⛎⛏⛐⛑⛒⛓⛔⛕⛖⛗⛘⛙⛚⛛⛜⛝⛞⛟⛠⛡⛢⛣⛤⛥</div>
<div class="line">⛦⛧⛨⛩⛪⛫⛬⛭⛮⛯⛰⛱⛲⛳⛴⛵⛶⛷⛸⛹⛺⛻⛼⛽⛾⛿</div>
</div>
<div data-block="Dingbats">
<div class="line">✀✁✂✃✄✅✆✇✈✉✊✋✌✍✎✏✐✑✒✓✔✕✖✗✘✙✚✛✜✝✞✟</div>
<div class="line">✠✡✢✣✤✥✦✧✨✩✪✫✬✭✮✯✰✱✲✳✴✵✶✷✸✹✺✻✼✽✾✿</div>
<div class="line">❀❁❂❃❄❅❆❇❈❉❊❋❌❍❎❏❐❑❒❓❔❕❖❗❘❙❚❛❜❝❞❟</div>
<div class="line">❠❡❢❣❤❥❦❧❶❷❸❹❺❻❼❽❾❿➀➁➂➃➄➅➆➇➈➉➊➋➌➍</div>
<div class="line">➎➏➐➑➒➓</div>
</div>
<div data-block="Miscellaneous">
<div class="line">⬒⬓⬔⬕⬖⬗⬘⬙⬚⬛⬜⬝⬞⬟⬠⬡⬢⬣⬤⬥⬦⬧⬨⬩⬪⬫⬬⬭⬮⬯⭐⭑</div>
<div class="line">⭒⭓⭔⭕⭖⭗⭘⭙⮸⮹⮽⮾⮿⯀⯁⯂⯃⯄⯅⯆⯇⯈⯊⯋⯌⯍⯎⯏⯐⯑</div>
</div>
<div data-block="CJK">
<div class="line">⺀⺁⺂⺃⺄⺅⺆⺇⺈⺉⺊⺋⺌⺍⺎⺏⺐⺑⺒⺓⺔⺕⺖⺗⺘⺙⺛⺜⺝⺞⺟⺠</div>
<div class="line">⺡⺢⺣⺤⺥⺦⺧⺨⺩⺪⺫⺬⺭⺮⺯⺰⺱⺲⺳⺴⺵⺶⺷⺸⺹⺺⺻⺼⺽⺾⺿⻀</div>
<div class="line">⻁⻂⻃⻄⻅⻆⻇⻈⻉⻊⻋⻌⻍⻎⻏⻐⻑⻒⻓⻔⻕⻖⻗⻘⻙⻚⻛⻜⻝⻞⻟⻠</div>
<div class="line">⻡⻢⻣⻤⻥⻦⻧⻨⻩⻪⻫⻬⻭⻮⻯⻰⻱⻲⻳</div>
</div>
<div data-block="Kangxi">
<div class="line">⼀⼁⼂⼃⼄⼅⼆⼇⼈⼉⼊⼋⼌⼍⼎⼏⼐⼑⼒⼓⼔⼕⼖⼗⼘⼙⼚⼛⼜⼝⼞⼟</div>
<div class="line">⼠⼡⼢⼣⼤⼥⼦⼧⼨⼩⼪⼫⼬⼭⼮⼯⼰⼱⼲⼳⼴⼵⼶⼷⼸⼹⼺⼻⼼⼽⼾⼿</div>
<div class="line">⽀⽁⽂⽃⽄⽅⽆⽇⽈⽉⽊⽋⽌⽍⽎⽏⽐⽑⽒⽓⽔⽕⽖⽗⽘⽙⽚⽛⽜⽝⽞⽟</div>
<div class="line">⽠⽡⽢⽣⽤⽥⽦⽧⽨⽩⽪⽫⽬⽭⽮⽯⽰⽱⽲⽳⽴⽵⽶⽷⽸⽹⽺⽻⽼⽽⽾⽿</div>
<div class="line">⾀⾁⾂⾃⾄⾅⾆⾇⾈⾉⾊⾋⾌⾍⾎⾏⾐⾑⾒⾓⾔⾕⾖⾗⾘⾙⾚⾛⾜⾝⾞⾟</div>
<div class="line">⾠⾡⾢⾣⾤⾥⾦⾧⾨⾩⾪⾫⾬⾭⾮⾯⾰⾱⾲⾳⾴⾵⾶⾷⾸⾹⾺⾻⾼⾽⾾⾿</div>
<div class="line">⿀⿁⿂⿃⿄⿅⿆⿇⿈⿉⿊⿋⿌⿍⿎⿏⿐⿑⿒⿓⿔⿕</div>
</div>
<div data-block="Ideographic">
<div class="line">⿰⿱⿲⿳⿴⿵⿶⿷⿸⿹⿺⿻</div>
</div>
<div data-block="CJK">
<div class="line">　〃〄々〆〇〒〓〠〡〢〣〤〥〦〧〨〩〱〲〳〴〵〶〷〸〹〺〻〼〽〾</div>
<div class="line">〿</div>
</div>
<div data-block="Hiragana">
<div class="line">あいうえおかがきぎくぐけげこごさざしじすずせぜそぞただちぢつづて</div>
<div class="line">でとどなにぬねのはばぱひびぴふぶぷへべぺほぼぽまみむめもやゆよら</div>
<div class="line">りるれろわゐゑをんゔゝゞゟ</div>
</div>
<div data-block="Katakana">
<div class="line">アイウエオカガキギクグケゲコゴサザシジスズセゼソゾタダチヂツヅテ</div>
<div class="line">デトドナニヌネノハバパヒビピフブプヘベペホボポマミムメモヤユヨラ</div>
<div class="line">リルレロワヰヱヲンヴヷヸヹヺ・ヽヾヿ</div>
</div>
<div data-block="Bopomofo">
<div class="line">ㄅㄆㄇㄈㄉㄊㄋㄌㄍㄎㄏㄐㄑㄒㄓㄔㄕㄖㄗㄘㄙㄚㄛㄜㄝㄞㄟㄠㄡㄢㄣㄤ</div>
<div class="line">ㄥㄦㄨㄩㄪㄫㄬㄭ</div>
</div>
<div data-block="Hangul">
<div class="line">ㄱㄲㄳㄴㄵㄶㄷㄸㄹㄺㄻㄼㄽㄾㄿㅀㅁㅂㅃㅄㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎㅏㅐ</div>
<div class="line">ㅑㅒㅓㅔㅕㅖㅗㅘㅙㅚㅛㅜㅝㅞㅟㅠㅡㅢㅣㅤㅥㅦㅧㅨㅩㅪㅫㅬㅭㅮㅯㅰ</div>
<div class="line">ㅱㅲㅳㅴㅵㅶㅷㅸㅹㅺㅻㅼㅽㅾㅿㆀㆁㆂㆃㆄㆅㆆㆇㆈㆉㆊㆋㆌㆍㆎ</div>
</div>
<div data-block="Kanbun">
<div class="line">㆐㆑㆒㆓㆔㆕㆖㆗㆘㆙㆚㆛㆜㆝㆞㆟</div>
</div>
<div data-block="Bopomofo">
<div class="line">ㆠㆡㆢㆣㆤㆥㆦㆧㆨㆩㆪㆫㆬㆭㆮㆯㆰㆱㆲㆳㆴㆵㆶㆷㆸㆹㆺ</div>
</div>
<div data-block="CJK">
<div class="line">㇀㇁㇂㇃㇄㇅㇆㇇㇈㇉㇊㇋㇌㇍㇎㇏㇐㇑㇒㇓㇔㇕㇖㇗㇘㇙㇚㇛㇜㇝㇞㇟</div>
<div class="line">㇠㇡㇢㇣</div>
</div>
<div data-block="Enclosed">
<div class="line">㈀㈁㈂㈃㈄㈅㈆㈇㈈㈉㈊㈋㈌㈍㈎㈏㈐㈑㈒㈓㈔㈕㈖㈗㈘㈙㈚㈛㈜㈝㈞㈠</div>
<div class="line">㈡㈢㈣㈤㈥㈦㈧㈨㈩㈪㈫㈬㈭㈮㈯㈰㈱㈲㈳㈴㈵㈶㈷㈸㈹㈺㈻㈼㈽㈾㈿㉀</div>
<div class="line">㉁㉂㉃㉄㉅㉆㉇㉈㉉㉊㉋㉌㉍㉎㉏㉐㉑㉒㉓㉔㉕㉖㉗㉘㉙㉚㉛㉜㉝㉞㉟㉠</div>
<div class="line">㉡㉢㉣㉤㉥㉦㉧㉨㉩㉪㉫㉬㉭㉮㉯㉰㉱㉲㉳㉴㉵㉶㉷㉸㉹㉺㉻㉼㉽㉾㉿㊀</div>
<div class="line">㊁㊂㊃㊄㊅㊆㊇㊈㊉㊊㊋㊌㊍㊎㊏㊐㊑㊒㊓㊔㊕㊖㊗㊘㊙㊚㊛㊜㊝㊞㊟㊠</div>
<div class="line">㊡㊢㊣㊤㊥㊦㊧㊨㊩㊪㊫㊬㊭㊮㊯㊰㊱㊲㊳㊴㊵㊶㊷㊸㊹㊺㊻㊼㊽㊾㊿㋀</div>
<div class="line">㋁㋂㋃㋄㋅㋆㋇㋈㋉㋊㋋㋌㋍㋎㋏㋐㋑㋒㋓㋔㋕㋖㋗㋘㋙㋚㋛㋜㋝㋞㋟㋠</div>
<div class="line">㋡㋢㋣㋤㋥㋦㋧㋨㋩㋪㋫㋬㋭㋮㋯㋰㋱㋲㋳㋴㋵㋶㋷㋸㋹㋺㋻㋼㋽㋾</div>
</div>
<div data-block="CJK">
<div class="line">㍘㍙㍚㍛㍜㍝㍞㍟㍠㍡㍢㍣㍤㍥㍦㍧㍨㍩㍪㍫㍬㍭㍮㍯㍰㍱㍲㍳㍴㍵㍶㍷</div>
<div class="line">㍸㍹㍺㎀㎁㎂㎃㎄㎅㎆㎇㎈㎉㎊㎋㎌㎍㎎㎏㎐㎑㎒㎓㎔㎕㎖㎗㎘㎙㎚㎛㎜</div>
<div class="line">㎝㎞㎟㎠㎡㎢㎣㎤㎥㎦㎧㎨㎩㎪㎫㎬㎭㎮㎯㎰㎱㎲㎳㎴㎵㎶㎷㎸㎹㎺㎻㎼</div>
<div class="line">㎽㎾㎿㏀㏁㏂㏃㏄㏅㏆㏇㏈㏉㏊㏋㏌㏍㏎㏏㏐㏑㏒㏓㏔㏕㏖㏗㏘㏙㏚㏛㏜</div>
<div class="line">㏝㏞㏟㏠㏡㏢㏣㏤㏥㏦㏧㏨㏩㏪㏫㏬㏭㏮㏯㏰㏱㏲㏳㏴㏵㏶㏷㏸㏹㏺㏻㏼</div>
<div class="line">㏽㏾㏿㐀䶵</div>
</div>
<div data-block="Yijing">
<div class="line">䷀䷁䷂䷃䷄䷅䷆䷇䷈䷉䷊䷋䷌䷍䷎䷏䷐䷑䷒䷓䷔䷕䷖䷗䷘䷙䷚䷛䷜䷝䷞䷟</div>
<div class="line">䷠䷡䷢䷣䷤䷥䷦䷧䷨䷩䷪䷫䷬䷭䷮䷯䷰䷱䷲䷳䷴䷵䷶䷷䷸䷹䷺䷻䷼䷽䷾䷿</div>
</div>
<div data-block="CJK">
<div class="line">一鿌</div>
</div>
<div data-block="Yi">
<div class="line">ꀀꀁꀂꀃꀄꀅꀆꀇꀈꀉꀊꀋꀌꀍꀎꀏꀐꀑꀒꀓꀔꀕꀖꀗꀘꀙꀚꀛꀜꀝꀞꀟ</div>
<div class="line">ꀠꀡꀢꀣꀤꀥꀦꀧꀨꀩꀪꀫꀬꀭꀮꀯꀰꀱꀲꀳꀴꀵꀶꀷꀸꀹꀺꀻꀼꀽꀾꀿ</div>
<div class="line">ꁀꁁꁂꁃꁄꁅꁆꁇꁈꁉꁊꁋꁌꁍꁎꁏꁐꁑꁒꁓꁔꁕꁖꁗꁘꁙꁚꁛꁜꁝꁞꁟ</div>
<div class="line">ꁠꁡꁢꁣꁤꁥꁦꁧꁨꁩꁪꁫꁬꁭꁮꁯꁰꁱꁲꁳꁴꁵꁶꁷꁸꁹꁺꁻꁼꁽꁾꁿ</div>
<div class="line">ꂀꂁꂂꂃꂄꂅꂆꂇꂈꂉꂊꂋꂌꂍꂎꂏꂐꂑꂒꂓꂔꂕꂖꂗꂘꂙꂚꂛꂜꂝꂞꂟ</div>
<div class="line">ꂠꂡꂢꂣꂤꂥꂦꂧꂨꂩꂪꂫꂬꂭꂮꂯꂰꂱꂲꂳꂴꂵꂶꂷꂸꂹꂺꂻꂼꂽꂾꂿ</div>
<div class="line">ꃀꃁꃂꃃꃄꃅꃆꃇꃈꃉꃊꃋꃌꃍꃎꃏꃐꃑꃒꃓꃔꃕꃖꃗꃘꃙꃚꃛꃜꃝꃞꃟ</div>
<div class="line">ꃠꃡꃢꃣꃤꃥꃦꃧꃨꃩꃪꃫꃬꃭꃮꃯꃰꃱꃲꃳꃴꃵꃶꃷꃸꃹꃺꃻꃼꃽꃾꃿ</div>
<div class="line">ꄀꄁꄂꄃꄄꄅꄆꄇꄈꄉꄊꄋꄌꄍꄎꄏꄐꄑꄒꄓꄔꄕꄖꄗꄘꄙꄚꄛꄜꄝꄞꄟ</div>
<div class="line">ꄠꄡꄢꄣꄤꄥꄦꄧꄨꄩꄪꄫꄬꄭꄮꄯꄰꄱꄲꄳꄴꄵꄶꄷꄸꄹꄺꄻꄼꄽꄾꄿ</div>
<div class="line">ꅀꅁꅂꅃꅄꅅꅆꅇꅈꅉꅊꅋꅌꅍꅎꅏꅐꅑꅒꅓꅔꅕꅖꅗꅘꅙꅚꅛꅜꅝꅞꅟ</div>
<div class="line">ꅠꅡꅢꅣꅤꅥꅦꅧꅨꅩꅪꅫꅬꅭꅮꅯꅰꅱꅲꅳꅴꅵꅶꅷꅸꅹꅺꅻꅼꅽꅾꅿ</div>
<div class="line">ꆀꆁꆂꆃꆄꆅꆆꆇꆈꆉꆊꆋꆌꆍꆎꆏꆐꆑꆒꆓꆔꆕꆖꆗꆘꆙꆚꆛꆜꆝꆞꆟ</div>
<div class="line">ꆠꆡꆢꆣꆤꆥꆦꆧꆨꆩꆪꆫꆬꆭꆮꆯꆰꆱꆲꆳꆴꆵꆶꆷꆸꆹꆺꆻꆼꆽꆾꆿ</div>
<div class="line">ꇀꇁꇂꇃꇄꇅꇆꇇꇈꇉꇊꇋꇌꇍꇎꇏꇐꇑꇒꇓꇔꇕꇖꇗꇘꇙꇚꇛꇜꇝꇞꇟ</div>
<div class="line">ꇠꇡꇢꇣꇤꇥꇦꇧꇨꇩꇪꇫꇬꇭꇮꇯꇰꇱꇲꇳꇴꇵꇶꇷꇸꇹꇺꇻꇼꇽꇾꇿ</div>
<div class="line">ꈀꈁꈂꈃꈄꈅꈆꈇꈈꈉꈊꈋꈌꈍꈎꈏꈐꈑꈒꈓꈔꈕꈖꈗꈘꈙꈚꈛꈜꈝꈞꈟ</div>
<div class="line">ꈠꈡꈢꈣꈤꈥꈦꈧꈨꈩꈪꈫꈬꈭꈮꈯꈰꈱꈲꈳꈴꈵꈶꈷꈸꈹꈺꈻꈼꈽꈾꈿ</div>
<div class="line">ꉀꉁꉂꉃꉄꉅꉆꉇꉈꉉꉊꉋꉌꉍꉎꉏꉐꉑꉒꉓꉔꉕꉖꉗꉘꉙꉚꉛꉜꉝꉞꉟ</div>
<div class="line">ꉠꉡꉢꉣꉤꉥꉦꉧꉨꉩꉪꉫꉬꉭꉮꉯꉰꉱꉲꉳꉴꉵꉶꉷꉸꉹꉺꉻꉼꉽꉾꉿ</div>
<div class="line">ꊀꊁꊂꊃꊄꊅꊆꊇꊈꊉꊊꊋꊌꊍꊎꊏꊐꊑꊒꊓꊔꊕꊖꊗꊘꊙꊚꊛꊜꊝꊞꊟ</div>
<div class="line">ꊠꊡꊢꊣꊤꊥꊦꊧꊨꊩꊪꊫꊬꊭꊮꊯꊰꊱꊲꊳꊴꊵꊶꊷꊸꊹꊺꊻꊼꊽꊾꊿ</div>
<div class="line">ꋀꋁꋂꋃꋄꋅꋆꋇꋈꋉꋊꋋꋌꋍꋎꋏꋐꋑꋒꋓꋔꋕꋖꋗꋘꋙꋚꋛꋜꋝꋞꋟ</div>
<div class="line">ꋠꋡꋢꋣꋤꋥꋦꋧꋨꋩꋪꋫꋬꋭꋮꋯꋰꋱꋲꋳꋴꋵꋶꋷꋸꋹꋺꋻꋼꋽꋾꋿ</div>
<div class="line">ꌀꌁꌂꌃꌄꌅꌆꌇꌈꌉꌊꌋꌌꌍꌎꌏꌐꌑꌒꌓꌔꌕꌖꌗꌘꌙꌚꌛꌜꌝꌞꌟ</div>
<div class="line">ꌠꌡꌢꌣꌤꌥꌦꌧꌨꌩꌪꌫꌬꌭꌮꌯꌰꌱꌲꌳꌴꌵꌶꌷꌸꌹꌺꌻꌼꌽꌾꌿ</div>
<div class="line">ꍀꍁꍂꍃꍄꍅꍆꍇꍈꍉꍊꍋꍌꍍꍎꍏꍐꍑꍒꍓꍔꍕꍖꍗꍘꍙꍚꍛꍜꍝꍞꍟ</div>
<div class="line">ꍠꍡꍢꍣꍤꍥꍦꍧꍨꍩꍪꍫꍬꍭꍮꍯꍰꍱꍲꍳꍴꍵꍶꍷꍸꍹꍺꍻꍼꍽꍾꍿ</div>
<div class="line">ꎀꎁꎂꎃꎄꎅꎆꎇꎈꎉꎊꎋꎌꎍꎎꎏꎐꎑꎒꎓꎔꎕꎖꎗꎘꎙꎚꎛꎜꎝꎞꎟ</div>
<div class="line">ꎠꎡꎢꎣꎤꎥꎦꎧꎨꎩꎪꎫꎬꎭꎮꎯꎰꎱꎲꎳꎴꎵꎶꎷꎸꎹꎺꎻꎼꎽꎾꎿ</div>
<div class="line">ꏀꏁꏂꏃꏄꏅꏆꏇꏈꏉꏊꏋꏌꏍꏎꏏꏐꏑꏒꏓꏔꏕꏖꏗꏘꏙꏚꏛꏜꏝꏞꏟ</div>
<div class="line">ꏠꏡꏢꏣꏤꏥꏦꏧꏨꏩꏪꏫꏬꏭꏮꏯꏰꏱꏲꏳꏴꏵꏶꏷꏸꏹꏺꏻꏼꏽꏾꏿ</div>
<div class="line">ꐀꐁꐂꐃꐄꐅꐆꐇꐈꐉꐊꐋꐌꐍꐎꐏꐐꐑꐒꐓꐔꐕꐖꐗꐘꐙꐚꐛꐜꐝꐞꐟ</div>
<div class="line">ꐠꐡꐢꐣꐤꐥꐦꐧꐨꐩꐪꐫꐬꐭꐮꐯꐰꐱꐲꐳꐴꐵꐶꐷꐸꐹꐺꐻꐼꐽꐾꐿ</div>
<div class="line">ꑀꑁꑂꑃꑄꑅꑆꑇꑈꑉꑊꑋꑌꑍꑎꑏꑐꑑꑒꑓꑔꑕꑖꑗꑘꑙꑚꑛꑜꑝꑞꑟ</div>
<div class="line">ꑠꑡꑢꑣꑤꑥꑦꑧꑨꑩꑪꑫꑬꑭꑮꑯꑰꑱꑲꑳꑴꑵꑶꑷꑸꑹꑺꑻꑼꑽꑾꑿ</div>
<div class="line">ꒀꒁꒂꒃꒄꒅꒆꒇꒈꒉꒊꒋꒌ꒐꒑꒒꒓꒔꒕꒖꒗꒘꒙꒚꒛꒜꒝꒞꒟꒠꒡꒢</div>
<div class="line">꒣꒤꒥꒦꒧꒨꒩꒪꒫꒬꒭꒮꒯꒰꒱꒲꒳꒴꒵꒶꒷꒸꒹꒺꒻꒼꒽꒾꒿꓀꓁꓂</div>
<div class="line">꓃꓄꓅꓆</div>
</div>
<div data-block="Hangul">
<div class="line">ꥠꥡꥢꥣꥤꥥꥦꥧꥨꥩꥪꥫꥬꥭꥮꥯꥰꥱꥲꥳꥴꥵꥶꥷꥸꥹꥺꥻꥼ가힣ힰ</div>
<div class="line">ힱힲힳힴힵힶힷힸힹힺힻힼힽힾힿퟀퟁퟂퟃퟄퟅퟆퟋퟌퟍퟎퟏퟐퟑퟒퟓퟔ</div>
<div class="line">ퟕퟖퟗퟘퟙퟚퟛퟜퟝퟞퟟퟠퟡퟢퟣퟤퟥퟦퟧퟨퟩퟪퟫퟬퟭퟮퟯퟰퟱퟲퟳퟴ</div>
<div class="line">ퟵퟶퟷퟸퟹퟺퟻ</div>
</div>
<div data-block="CJK">
<div class="line">豈更車賈滑串句龜龜契金喇奈懶癩羅蘿螺裸邏樂洛烙珞落酪駱亂卵欄爛蘭</div>
<div class="line">鸞嵐濫藍襤拉臘蠟廊朗浪狼郎來冷勞擄櫓爐盧老蘆虜路露魯鷺碌祿綠菉錄</div>
<div class="line">鹿論壟弄籠聾牢磊賂雷壘屢樓淚漏累縷陋勒肋凜凌稜綾菱陵讀拏樂諾丹寧</div>
<div class="line">怒率異北磻便復不泌數索參塞省葉說殺辰沈拾若掠略亮兩凉梁糧良諒量勵</div>
<div class="line">呂女廬旅濾礪閭驪麗黎力曆歷轢年憐戀撚漣煉璉秊練聯輦蓮連鍊列劣咽烈</div>
<div class="line">裂說廉念捻殮簾獵令囹寧嶺怜玲瑩羚聆鈴零靈領例禮醴隸惡了僚寮尿料樂</div>
<div class="line">燎療蓼遼龍暈阮劉杻柳流溜琉留硫紐類六戮陸倫崙淪輪律慄栗率隆利吏履</div>
<div class="line">易李梨泥理痢罹裏裡里離匿溺吝燐璘藺隣鱗麟林淋臨立笠粒狀炙識什茶刺</div>
<div class="line">切度拓糖宅洞暴輻行降見廓兀嗀﨎﨏塚﨑晴﨓﨔凞猪益礼神祥福靖精羽﨟</div>
<div class="line">蘒﨡諸﨣﨤逸都﨧﨨﨩飯飼館鶴郞隷侮僧免勉勤卑喝嘆器塀墨層屮悔慨憎</div>
<div class="line">懲敏既暑梅海渚漢煮爫琢碑社祉祈祐祖祝禍禎穀突節練縉繁署者臭艹艹著</div>
<div class="line">褐視謁謹賓贈辶逸難響頻恵𤋮舘並况全侀充冀勇勺喝啕喙嗢塚墳奄奔婢嬨</div>
<div class="line">廒廙彩徭惘慎愈憎慠懲戴揄搜摒敖晴朗望杖歹殺流滛滋漢瀞煮瞧爵犯猪瑱</div>
<div class="line">甆画瘝瘟益盛直睊着磌窱節类絛練缾者荒華蝹襁覆視調諸請謁諾諭謹變贈</div>
<div class="line">輸遲醙鉶陼難靖韛響頋頻鬒龜𢡊𢡄𣏕㮝䀘䀹𥉉𥳐𧻓齃龎</div>
</div>
<div data-block="Vertical">
<div class="line">︐︑︒︓︔︕︖︗︘︙</div>
</div>
<div data-block="CJK">
<div class="line">︰︱︲︳︴︵︶︷︸︹︺︻︼︽︾︿﹀﹁﹂﹃﹄﹅﹆﹇﹈</div>
</div>
<div data-block="Small">
<div class="line">﹔﹕﹖﹗﹟﹠﹡﹢﹨﹩﹪﹫</div>
</div>
<div data-block="Halfwidth">
<div class="line">＂＃＄％＆＇＊＋／０１２３４５６７８９＠ＡＢＣＤＥＦＧＨＩＪＫＬ</div>
<div class="line">ＭＮＯＰＱＲＳＴＵＶＷＸＹＺ＼＾｀ａｂｃｄｅｆｇｈｉｊｋｌｍｎｏ</div>
<div class="line">ｐｑｒｓｔｕｖｗｘｙｚ￠￡￢￤￥￦</div>
</div>
<div data-block="Specials">
<div class="line">￼�</div>
</div>
<div data-block="Meroitic">
<div class="line">𐦀𐦁𐦂𐦃𐦄𐦅𐦆𐦇𐦈𐦉𐦊𐦋𐦌𐦍𐦎𐦏𐦐𐦑𐦒𐦓𐦔𐦕𐦖𐦗𐦘𐦙𐦚𐦛𐦜𐦝𐦞𐦟</div>
</div>
<div data-block="Siddham">
<div class="line">𑖀𑖁𑖂𑖃𑖄𑖅𑖆𑖇𑖈𑖉𑖊𑖋𑖌𑖍𑖎𑖏𑖐𑖑𑖒𑖓𑖔𑖕𑖖𑖗𑖘𑖙𑖚𑖛𑖜𑖝𑖞𑖟</div>
<div class="line">𑖠𑖡𑖢𑖣𑖤𑖥𑖦𑖧𑖨𑖩𑖪𑖫𑖬𑖭𑖮𑗁𑗂𑗃𑗄𑗅𑗆𑗇𑗈𑗉</div>
</div>
<div data-block="Egyptian">
<div class="line">𓀀𓀁𓀂𓀃𓀄𓀅𓀆𓀇𓀈𓀉𓀊𓀋𓀌𓀍𓀎𓀏𓀐𓀑𓀒𓀓𓀔𓀕𓀖𓀗𓀘𓀙𓀚𓀛𓀜𓀝𓀞𓀟</div>
<div class="line">𓀠𓀡𓀢𓀣𓀤𓀥𓀦𓀧𓀨𓀩𓀪𓀫𓀬𓀭𓀮𓀯𓀰𓀱𓀲𓀳𓀴𓀵𓀶𓀷𓀸𓀹𓀺𓀻𓀼𓀽𓀾𓀿</div>
<div class="line">𓁀𓁁𓁂𓁃𓁄𓁅𓁆𓁇𓁈𓁉𓁊𓁋𓁌𓁍𓁎𓁏𓁐𓁑𓁒𓁓𓁔𓁕𓁖𓁗𓁘𓁙𓁚𓁛𓁜𓁝𓁞𓁟</div>
<div class="line">𓁠𓁡𓁢𓁣𓁤𓁥𓁦𓁧𓁨𓁩𓁪𓁫𓁬𓁭𓁮𓁯𓁰𓁱𓁲𓁳𓁴𓁵𓁶𓁷𓁸𓁹𓁺𓁻𓁼𓁽𓁾𓁿</div>
<div class="line">𓂀𓂁𓂂𓂃𓂄𓂅𓂆𓂇𓂈𓂉𓂊𓂋𓂌𓂍𓂎𓂏𓂐𓂑𓂒𓂓𓂔𓂕𓂖𓂗𓂘𓂙𓂚𓂛𓂜𓂝𓂞𓂟</div>
<div class="line">𓂠𓂡𓂢𓂣𓂤𓂥𓂦𓂧𓂨𓂩𓂪𓂫𓂬𓂭𓂮𓂯𓂰𓂱𓂲𓂳𓂴𓂵𓂶𓂷𓂸𓂹𓂺𓂻𓂼𓂽𓂾𓂿</div>
<div class="line">𓃀𓃁𓃂𓃃𓃄𓃅𓃆𓃇𓃈𓃉𓃊𓃋𓃌𓃍𓃎𓃏𓃐𓃑𓃒𓃓𓃔𓃕𓃖𓃗𓃘𓃙𓃚𓃛𓃜𓃝𓃞𓃟</div>
<div class="line">𓃠𓃡𓃢𓃣𓃤𓃥𓃦𓃧𓃨𓃩𓃪𓃫𓃬𓃭𓃮𓃯𓃰𓃱𓃲𓃳𓃴𓃵𓃶𓃷𓃸𓃹𓃺𓃻𓃼𓃽𓃾𓃿</div>
<div class="line">𓄀𓄁𓄂𓄃𓄄𓄅𓄆𓄇𓄈𓄉𓄊𓄋𓄌𓄍𓄎𓄏𓄐𓄑𓄒𓄓𓄔𓄕𓄖𓄗𓄘𓄙𓄚𓄛𓄜𓄝𓄞𓄟</div>
<div class="line">𓄠𓄡𓄢𓄣𓄤𓄥𓄦𓄧𓄨𓄩𓄪𓄫𓄬𓄭𓄮𓄯𓄰𓄱𓄲𓄳𓄴𓄵𓄶𓄷𓄸𓄹𓄺𓄻𓄼𓄽𓄾𓄿</div>
<div class="line">𓅀𓅁𓅂𓅃𓅄𓅅𓅆𓅇𓅈𓅉𓅊𓅋𓅌𓅍𓅎𓅏𓅐𓅑𓅒𓅓𓅔𓅕𓅖𓅗𓅘𓅙𓅚𓅛𓅜𓅝𓅞𓅟</div>
<div class="line">𓅠𓅡𓅢𓅣𓅤𓅥𓅦𓅧𓅨𓅩𓅪𓅫𓅬𓅭𓅮𓅯𓅰𓅱𓅲𓅳𓅴𓅵𓅶𓅷𓅸𓅹𓅺𓅻𓅼𓅽𓅾𓅿</div>
<div class="line">𓆀𓆁𓆂𓆃𓆄𓆅𓆆𓆇𓆈𓆉𓆊𓆋𓆌𓆍𓆎𓆏𓆐𓆑𓆒𓆓𓆔𓆕𓆖𓆗𓆘𓆙𓆚𓆛𓆜𓆝𓆞𓆟</div>
<div class="line">𓆠𓆡𓆢𓆣𓆤𓆥𓆦𓆧𓆨𓆩𓆪𓆫𓆬𓆭𓆮𓆯𓆰𓆱𓆲𓆳𓆴𓆵𓆶𓆷𓆸𓆹𓆺𓆻𓆼𓆽𓆾𓆿</div>
<div class="line">𓇀𓇁𓇂𓇃𓇄𓇅𓇆𓇇𓇈𓇉𓇊𓇋𓇌𓇍𓇎𓇏𓇐𓇑𓇒𓇓𓇔𓇕𓇖𓇗𓇘𓇙𓇚𓇛𓇜𓇝𓇞𓇟</div>
<div class="line">𓇠𓇡𓇢𓇣𓇤𓇥𓇦𓇧𓇨𓇩𓇪𓇫𓇬𓇭𓇮𓇯𓇰𓇱𓇲𓇳𓇴𓇵𓇶𓇷𓇸𓇹𓇺𓇻𓇼𓇽𓇾𓇿</div>
<div class="line">𓈀𓈁𓈂𓈃𓈄𓈅𓈆𓈇𓈈𓈉𓈊𓈋𓈌𓈍𓈎𓈏𓈐𓈑𓈒𓈓𓈔𓈕𓈖𓈗𓈘𓈙𓈚𓈛𓈜𓈝𓈞𓈟</div>
<div class="line">𓈠𓈡𓈢𓈣𓈤𓈥𓈦𓈧𓈨𓈩𓈪𓈫𓈬𓈭𓈮𓈯𓈰𓈱𓈲𓈳𓈴𓈵𓈶𓈷𓈸𓈹𓈺𓈻𓈼𓈽𓈾𓈿</div>
<div class="line">𓉀𓉁𓉂𓉃𓉄𓉅𓉆𓉇𓉈𓉉𓉊𓉋𓉌𓉍𓉎𓉏𓉐𓉑𓉒𓉓𓉔𓉕𓉖𓉗𓉘𓉙𓉚𓉛𓉜𓉝𓉞𓉟</div>
<div class="line">𓉠𓉡𓉢𓉣𓉤𓉥𓉦𓉧𓉨𓉩𓉪𓉫𓉬𓉭𓉮𓉯𓉰𓉱𓉲𓉳𓉴𓉵𓉶𓉷𓉸𓉹𓉺𓉻𓉼𓉽𓉾𓉿</div>
<div class="line">𓊀𓊁𓊂𓊃𓊄𓊅𓊆𓊇𓊈𓊉𓊊𓊋𓊌𓊍𓊎𓊏𓊐𓊑𓊒𓊓𓊔𓊕𓊖𓊗𓊘𓊙𓊚𓊛𓊜𓊝𓊞𓊟</div>
<div class="line">𓊠𓊡𓊢𓊣𓊤𓊥𓊦𓊧𓊨𓊩𓊪𓊫𓊬𓊭𓊮𓊯𓊰𓊱𓊲𓊳𓊴𓊵𓊶𓊷𓊸𓊹𓊺𓊻𓊼𓊽𓊾𓊿</div>
<div class="line">𓋀𓋁𓋂𓋃𓋄𓋅𓋆𓋇𓋈𓋉𓋊𓋋𓋌𓋍𓋎𓋏𓋐𓋑𓋒𓋓𓋔𓋕𓋖𓋗𓋘𓋙𓋚𓋛𓋜𓋝𓋞𓋟</div>
<div class="line">𓋠𓋡𓋢𓋣𓋤𓋥𓋦𓋧𓋨𓋩𓋪𓋫𓋬𓋭𓋮𓋯𓋰𓋱𓋲𓋳𓋴𓋵𓋶𓋷𓋸𓋹𓋺𓋻𓋼𓋽𓋾𓋿</div>
<div class="line">𓌀𓌁𓌂𓌃𓌄𓌅𓌆𓌇𓌈𓌉𓌊𓌋𓌌𓌍𓌎𓌏𓌐𓌑𓌒𓌓𓌔𓌕𓌖𓌗𓌘𓌙𓌚𓌛𓌜𓌝𓌞𓌟</div>
<div class="line">𓌠𓌡𓌢𓌣𓌤𓌥𓌦𓌧𓌨𓌩𓌪𓌫𓌬𓌭𓌮𓌯𓌰𓌱𓌲𓌳𓌴𓌵𓌶𓌷𓌸𓌹𓌺𓌻𓌼𓌽𓌾𓌿</div>
<div class="line">𓍀𓍁𓍂𓍃𓍄𓍅𓍆𓍇𓍈𓍉𓍊𓍋𓍌𓍍𓍎𓍏𓍐𓍑𓍒𓍓𓍔𓍕𓍖𓍗𓍘𓍙𓍚𓍛𓍜𓍝𓍞𓍟</div>
<div class="line">𓍠𓍡𓍢𓍣𓍤𓍥𓍦𓍧𓍨𓍩𓍪𓍫𓍬𓍭𓍮𓍯𓍰𓍱𓍲𓍳𓍴𓍵𓍶𓍷𓍸𓍹𓍺𓍻𓍼𓍽𓍾𓍿</div>
<div class="line">𓎀𓎁𓎂𓎃𓎄𓎅𓎆𓎇𓎈𓎉𓎊𓎋𓎌𓎍𓎎𓎏𓎐𓎑𓎒𓎓𓎔𓎕𓎖𓎗𓎘𓎙𓎚𓎛𓎜𓎝𓎞𓎟</div>
<div class="line">𓎠𓎡𓎢𓎣𓎤𓎥𓎦𓎧𓎨𓎩𓎪𓎫𓎬𓎭𓎮𓎯𓎰𓎱𓎲𓎳𓎴𓎵𓎶𓎷𓎸𓎹𓎺𓎻𓎼𓎽𓎾𓎿</div>
<div class="line">𓏀𓏁𓏂𓏃𓏄𓏅𓏆𓏇𓏈𓏉𓏊𓏋𓏌𓏍𓏎𓏏𓏐𓏑𓏒𓏓𓏔𓏕𓏖𓏗𓏘𓏙𓏚𓏛𓏜𓏝𓏞𓏟</div>
<div class="line">𓏠𓏡𓏢𓏣𓏤𓏥𓏦𓏧𓏨𓏩𓏪𓏫𓏬𓏭𓏮𓏯𓏰𓏱𓏲𓏳𓏴𓏵𓏶𓏷𓏸𓏹𓏺𓏻𓏼𓏽𓏾𓏿</div>
<div class="line">𓐀𓐁𓐂𓐃𓐄𓐅𓐆𓐇𓐈𓐉𓐊𓐋𓐌𓐍𓐎𓐏𓐐𓐑𓐒𓐓𓐔𓐕𓐖𓐗𓐘𓐙𓐚𓐛𓐜𓐝𓐞𓐟</div>
<div class="line">𓐠𓐡𓐢𓐣𓐤𓐥𓐦𓐧𓐨𓐩𓐪𓐫𓐬𓐭𓐮</div>
</div>
<div data-block="Kana">
<div class="line">𛀀𛀁</div>
</div>
<div data-block="Byzantine">
<div class="line">𝀀𝀁𝀂𝀃𝀄𝀅𝀆𝀇𝀈𝀉𝀊𝀋𝀌𝀍𝀎𝀏𝀐𝀑𝀒𝀓𝀔𝀕𝀖𝀗𝀘𝀙𝀚𝀛𝀜𝀝𝀞𝀟</div>
<div class="line">𝀠𝀡𝀢𝀣𝀤𝀥𝀦𝀧𝀨𝀩𝀪𝀫𝀬𝀭𝀮𝀯𝀰𝀱𝀲𝀳𝀴𝀵𝀶𝀷𝀸𝀹𝀺𝀻𝀼𝀽𝀾𝀿</div>
<div class="line">𝁀𝁁𝁂𝁃𝁄𝁅𝁆𝁇𝁈𝁉𝁊𝁋𝁌𝁍𝁎𝁏𝁐𝁑𝁒𝁓𝁔𝁕𝁖𝁗𝁘𝁙𝁚𝁛𝁜𝁝𝁞𝁟</div>
<div class="line">𝁠𝁡𝁢𝁣𝁤𝁥𝁦𝁧𝁨𝁩𝁪𝁫𝁬𝁭𝁮𝁯𝁰𝁱𝁲𝁳𝁴𝁵𝁶𝁷𝁸𝁹𝁺𝁻𝁼𝁽𝁾𝁿</div>
<div class="line">𝂀𝂁𝂂𝂃𝂄𝂅𝂆𝂇𝂈𝂉𝂊𝂋𝂌𝂍𝂎𝂏𝂐𝂑𝂒𝂓𝂔𝂕𝂖𝂗𝂘𝂙𝂚𝂛𝂜𝂝𝂞𝂟</div>
<div class="line">𝂠𝂡𝂢𝂣𝂤𝂥𝂦𝂧𝂨𝂩𝂪𝂫𝂬𝂭𝂮𝂯𝂰𝂱𝂲𝂳𝂴𝂵𝂶𝂷𝂸𝂹𝂺𝂻𝂼𝂽𝂾𝂿</div>
<div class="line">𝃀𝃁𝃂𝃃𝃄𝃅𝃆𝃇𝃈𝃉𝃊𝃋𝃌𝃍𝃎𝃏𝃐𝃑𝃒𝃓𝃔𝃕𝃖𝃗𝃘𝃙𝃚𝃛𝃜𝃝𝃞𝃟</div>
<div class="line">𝃠𝃡𝃢𝃣𝃤𝃥𝃦𝃧𝃨𝃩𝃪𝃫𝃬𝃭𝃮𝃯𝃰𝃱𝃲𝃳𝃴𝃵</div>
</div>
<div data-block="Musical">
<div class="line">𝄀𝄁𝄂𝄃𝄄𝄅𝄆𝄇𝄈𝄉𝄊𝄋𝄌𝄍𝄎𝄏𝄐𝄑𝄒𝄓𝄔𝄕𝄖𝄗𝄘𝄙𝄚𝄛𝄜𝄝𝄞𝄟</div>
<div class="line">𝄠𝄡𝄢𝄣𝄤𝄥𝄦𝄩𝄪𝄫𝄬𝄭𝄮𝄯𝄰𝄱𝄲𝄳𝄴𝄵𝄶𝄷𝄸𝄹𝄺𝄻𝄼𝄽𝄾𝄿𝅀𝅁</div>
<div class="line">𝅂𝅃𝅄𝅅𝅆𝅇𝅈𝅉𝅊𝅋𝅌𝅍𝅎𝅏𝅐𝅑𝅒𝅓𝅔𝅕𝅖𝅗𝅘𝅙𝅚𝅛𝅜𝅝𝅗𝅥𝅘𝅥𝅘𝅥𝅮𝅘𝅥𝅯</div>
<div class="line">𝅘𝅥𝅰𝅘𝅥𝅱𝅘𝅥𝅲𝅪𝅫𝅬𝆃𝆄𝆌𝆍𝆎𝆏𝆐𝆑𝆒𝆓𝆔𝆕𝆖𝆗𝆘𝆙𝆚𝆛𝆜𝆝𝆞𝆟𝆠𝆡𝆢𝆣</div>
<div class="line">𝆤𝆥𝆦𝆧𝆨𝆩𝆮𝆯𝆰𝆱𝆲𝆳𝆴𝆵𝆶𝆷𝆸𝆹𝆺𝆹𝅥𝆺𝅥𝆹𝅥𝅮𝆺𝅥𝅮𝆹𝅥𝅯𝆺𝅥𝅯𝇁𝇂𝇃𝇄𝇅𝇆𝇇</div>
<div class="line">𝇈𝇉𝇊𝇋𝇌𝇍𝇎𝇏𝇐𝇑𝇒𝇓𝇔𝇕𝇖𝇗𝇘𝇙𝇚𝇛𝇜𝇝</div>
</div>
<div data-block="Tai">
<div class="line">𝌀𝌁𝌂𝌃𝌄𝌅𝌆𝌇𝌈𝌉𝌊𝌋𝌌𝌍𝌎𝌏𝌐𝌑𝌒𝌓𝌔𝌕𝌖𝌗𝌘𝌙𝌚𝌛𝌜𝌝𝌞𝌟</div>
<div class="line">𝌠𝌡𝌢𝌣𝌤𝌥𝌦𝌧𝌨𝌩𝌪𝌫𝌬𝌭𝌮𝌯𝌰𝌱𝌲𝌳𝌴𝌵𝌶𝌷𝌸𝌹𝌺𝌻𝌼𝌽𝌾𝌿</div>
<div class="line">𝍀𝍁𝍂𝍃𝍄𝍅𝍆𝍇𝍈𝍉𝍊𝍋𝍌𝍍𝍎𝍏𝍐𝍑𝍒𝍓𝍔𝍕𝍖</div>
</div>
<div data-block="Counting">
<div class="line">𝍠𝍡𝍢𝍣𝍤𝍥𝍦𝍧𝍨𝍩𝍪𝍫𝍬𝍭𝍮𝍯𝍰𝍱</div>
</div>
<div data-block="Mahjong">
<div class="line">🀀🀁🀂🀃🀄🀅🀆🀇🀈🀉🀊🀋🀌🀍🀎🀏🀐🀑🀒🀓🀔🀕🀖🀗🀘🀙🀚🀛🀜🀝🀞🀟</div>
<div class="line">🀠🀡🀢🀣🀤🀥🀦🀧🀨🀩🀪🀫</div>
</div>
<div data-block="Domino">
<div class="line">🀰🀱🀲🀳🀴🀵🀶🀷🀸🀹🀺🀻🀼🀽🀾🀿🁀🁁🁂🁃🁄🁅🁆🁇🁈🁉🁊🁋🁌🁍🁎🁏</div>
<div class="line">🁐🁑🁒🁓🁔🁕🁖🁗🁘🁙🁚🁛🁜🁝🁞🁟🁠🁡🁢🁣🁤🁥🁦🁧🁨🁩🁪🁫🁬🁭🁮🁯</div>
<div class="line">🁰🁱🁲🁳🁴🁵🁶🁷🁸🁹🁺🁻🁼🁽🁾🁿🂀🂁🂂🂃🂄🂅🂆🂇🂈🂉🂊🂋🂌🂍🂎🂏</div>
<div class="line">🂐🂑🂒🂓</div>
</div>
<div data-block="Playing">
<div class="line">🂠🂡🂢🂣🂤🂥🂦🂧🂨🂩🂪🂫🂬🂭🂮🂱🂲🂳🂴🂵🂶🂷🂸🂹🂺🂻🂼🂽🂾🂿🃁🃂</div>
<div class="line">🃃🃄🃅🃆🃇🃈🃉🃊🃋🃌🃍🃎🃏🃑🃒🃓🃔🃕🃖🃗🃘🃙🃚🃛🃜🃝🃞🃟🃠🃡🃢🃣</div>
<div class="line">🃤🃥🃦🃧🃨🃩🃪🃫🃬🃭🃮🃯🃰🃱🃲🃳🃴🃵</div>
</div>
<div data-block="Enclosed">
<div class="line">🄀🄁🄂🄃🄄🄅🄆🄇🄈🄉🄊🄋🄌🄐🄑🄒🄓🄔🄕🄖🄗🄘🄙🄚🄛🄜🄝🄞🄟🄠🄡🄢</div>
<div class="line">🄣🄤🄥🄦🄧🄨🄩🄪🄫🄬🄭🄮🄰🄱🄲🄳🄴🄵🄶🄷🄸🄹🄺🄻🄼🄽🄾🄿🅀🅁🅂🅃</div>
<div class="line">🅄🅅🅆🅇🅈🅉🅊🅋🅌🅍🅎🅏🅐🅑🅒🅓🅔🅕🅖🅗🅘🅙🅚🅛🅜🅝🅞🅟🅠🅡🅢🅣</div>
<div class="line">🅤🅥🅦🅧🅨🅩🅪🅫🅰🅱🅲🅳🅴🅵🅶🅷🅸🅹🅺🅻🅼🅽🅾🅿🆀🆁🆂🆃🆄🆅🆆🆇</div>
<div class="line">🆈🆉🆊🆋🆌🆍🆎🆏🆐🆑🆒🆓🆔🆕🆖🆗🆘🆙🆚🇦🇧🇨🇩🇪🇫🇬🇭🇮🇯🇰🇱🇲</div>
<div class="line">🇳🇴🇵🇶🇷🇸🇹🇺🇻🇼🇽🇾🇿🈂🈐🈑🈒🈓🈔🈕🈖🈗🈘🈙🈚🈛🈜🈝🈞🈟🈠🈡</div>
<div class="line">🈢🈣🈤🈥🈦🈧🈨🈩🈪🈫🈬🈭🈮🈯🈰🈱🈲🈳🈴🈵🈶🈷🈸🈹🈺🉀🉁🉂🉃🉄🉅🉆</div>
<div class="line">🉇🉈🉐🉑</div>
</div>
<div data-block="Miscellaneous">
<div class="line">🌀🌁🌂🌃🌄🌅🌆🌇🌈🌉🌊🌋🌌🌍🌎🌏🌐🌑🌒🌓🌔🌕🌖🌗🌘🌙🌚🌛🌜🌝🌞🌟</div>
<div class="line">🌠🌡🌢🌣🌤🌥🌦🌧🌨🌩🌪🌫🌬🌰🌱🌲🌳🌴🌵🌶🌷🌸🌹🌺🌻🌼🌽🌾🌿🍀🍁🍂</div>
<div class="line">🍃🍄🍅🍆🍇🍈🍉🍊🍋🍌🍍🍎🍏🍐🍑🍒🍓🍔🍕🍖🍗🍘🍙🍚🍛🍜🍝🍞🍟🍠🍡🍢</div>
<div class="line">🍣🍤🍥🍦🍧🍨🍩🍪🍫🍬🍭🍮🍯🍰🍱🍲🍳🍴🍵🍶🍷🍸🍹🍺🍻🍼🍽🎀🎁🎂🎃🎄</div>
<div class="line">🎅🎆🎇🎈🎉🎊🎋🎌🎍🎎🎏🎐🎑🎒🎓🎔🎕🎖🎗🎘🎙🎚🎛🎜🎝🎞🎟🎠🎡🎢🎣🎤</div>
<div class="line">🎥🎦🎧🎨🎩🎪🎫🎬🎭🎮🎯🎰🎱🎲🎳🎴🎵🎶🎷🎸🎹🎺🎻🎼🎽🎾🎿🏀🏁🏂🏃🏄</div>
<div class="line">🏅🏆🏇🏈🏉🏊🏋🏌🏍🏎🏔🏕🏖🏗🏘🏙🏚🏛🏜🏝🏞🏟🏠🏡🏢🏣🏤🏥🏦🏧🏨🏩</div>
<div class="line">🏪🏫🏬🏭🏮🏯🏰🏱🏲🏳🏴🏵🏶🏷🐀🐁🐂🐃🐄🐅🐆🐇🐈🐉🐊🐋🐌🐍🐎🐏🐐🐑</div>
<div class="line">🐒🐓🐔🐕🐖🐗🐘🐙🐚🐛🐜🐝🐞🐟🐠🐡🐢🐣🐤🐥🐦🐧🐨🐩🐪🐫🐬🐭🐮🐯🐰🐱</div>
<div class="line">🐲🐳🐴🐵🐶🐷🐸🐹🐺🐻🐼🐽🐾🐿👀👁👂👃👄👅👆👇👈👉👊👋👌👍👎👏👐👑</div>
<div class="line">👒👓👔👕👖👗👘👙👚👛👜👝👞👟👠👡👢👣👤👥👦👧👨👩👪👫👬👭👮👯👰👱</div>
<div class="line">👲👳👴👵👶👷👸👹👺👻👼👽👾👿💀💁💂💃💄💅💆💇💈💉💊💋💌💍💎💏💐💑</div>
<div class="line">💒💓💔💕💖💗💘💙💚💛💜💝💞💟💠💡💢💣💤💥💦💧💨💩💪💫💬💭💮💯💰💱</div>
<div class="line">💲💳💴💵💶💷💸💹💺💻💼💽💾💿📀📁📂📃📄📅📆📇📈📉📊📋📌📍📎📏📐📑</div>
<div class="line">📒📓📔📕📖📗📘📙📚📛📜📝📞📟📠📡📢📣📤📥📦📧📨📩📪📫📬📭📮📯📰📱</div>
<div class="line">📲📳📴📵📶📷📸📹📺📻📼📽📾🔀🔁🔂🔃🔄🔅🔆🔇🔈🔉🔊🔋🔌🔍🔎🔏🔐🔑🔒</div>
<div class="line">🔓🔔🔕🔖🔗🔘🔙🔚🔛🔜🔝🔞🔟🔠🔡🔢🔣🔤🔥🔦🔧🔨🔩🔪🔫🔬🔭🔮🔯🔰🔱🔲</div>
<div class="line">🔳🔴🔵🔶🔷🔸🔹🔺🔻🔼🔽🔾🔿🕀🕁🕂🕃🕄🕅🕆🕇🕈🕉🕊🕐🕑🕒🕓🕔🕕🕖🕗</div>
<div class="line">🕘🕙🕚🕛🕜🕝🕞🕟🕠🕡🕢🕣🕤🕥🕦🕧🕨🕩🕪🕫🕬🕭🕮🕯🕰🕱🕲🕳🕴🕵🕶🕷</div>
<div class="line">🕸🕹🕻🕼🕽🕾🕿🖀🖁🖂🖃🖄🖅🖆🖇🖈🖉🖊🖋🖌🖍🖎🖏🖐🖑🖒🖓🖔🖕🖖🖗🖘</div>
<div class="line">🖙🖚🖛🖜🖝🖞🖟🖠🖡🖢🖣🖥🖦🖧🖨🖩🖪🖫🖬🖭🖮🖯🖰🖱🖲🖳🖴🖵🖶🖷🖸🖹</div>
<div class="line">🖺🖻🖼🖽🖾🖿🗀🗁🗂🗃🗄🗅🗆🗇🗈🗉🗊🗋🗌🗍🗎🗏🗐🗑🗒🗓🗔🗕🗖🗗🗘🗙</div>
<div class="line">🗚🗛🗜🗝🗞🗟🗠🗡🗢🗣🗤🗥🗦🗧🗨🗩🗪🗫🗬🗭🗮🗯🗰🗱🗲🗳🗴🗵🗶🗷🗸🗹</div>
<div class="line">🗺🗻🗼🗽🗾🗿</div>
</div>
<div data-block="Emoticons">
<div class="line">😀😁😂😃😄😅😆😇😈😉😊😋😌😍😎😏😐😑😒😓😔😕😖😗😘😙😚😛😜😝😞😟</div>
<div class="line">😠😡😢😣😤😥😦😧😨😩😪😫😬😭😮😯😰😱😲😳😴😵😶😷😸😹😺😻😼😽😾😿</div>
<div class="line">🙀🙁🙂🙅🙆🙇🙈🙉🙊🙋🙌🙍🙎🙏</div>
</div>
<div data-block="Ornamental">
<div class="line">🙐🙑🙒🙓🙔🙕🙖🙗🙘🙙🙚🙛🙜🙝🙞🙟🙠🙡🙢🙣🙤🙥🙦🙧🙨🙩🙪🙫🙬🙭🙮🙯</div>
<div class="line">🙰🙱🙲🙳🙴🙵🙶🙷🙸🙹🙺🙻🙼🙽🙾🙿</div>
</div>
<div data-block="Transport">
<div class="line">🚀🚁🚂🚃🚄🚅🚆🚇🚈🚉🚊🚋🚌🚍🚎🚏🚐🚑🚒🚓🚔🚕🚖🚗🚘🚙🚚🚛🚜🚝🚞🚟</div>
<div class="line">🚠🚡🚢🚣🚤🚥🚦🚧🚨🚩🚪🚫🚬🚭🚮🚯🚰🚱🚲🚳🚴🚵🚶🚷🚸🚹🚺🚻🚼🚽🚾🚿</div>
<div class="line">🛀🛁🛂🛃🛄🛅🛆🛇🛈🛉🛊🛋🛌🛍🛎🛏🛠🛡🛢🛣🛤🛥🛦🛧🛨🛩🛪🛫🛬🛰🛱🛲</div>
<div class="line">🛳</div>
</div>
<div data-block="Alchemical">
<div class="line">🜀🜁🜂🜃🜄🜅🜆🜇🜈🜉🜊🜋🜌🜍🜎🜏🜐🜑🜒🜓🜔🜕🜖🜗🜘🜙🜚🜛🜜🜝🜞🜟</div>
<div class="line">🜠🜡🜢🜣🜤🜥🜦🜧🜨🜩🜪🜫🜬🜭🜮🜯🜰🜱🜲🜳🜴🜵🜶🜷🜸🜹🜺🜻🜼🜽🜾🜿</div>
<div class="line">🝀🝁🝂🝃🝄🝅🝆🝇🝈🝉🝊🝋🝌🝍🝎🝏🝐🝑🝒🝓🝔🝕🝖🝗🝘🝙🝚🝛🝜🝝🝞🝟</div>
<div class="line">🝠🝡🝢🝣🝤🝥🝦🝧🝨🝩🝪🝫🝬🝭🝮🝯🝰🝱🝲🝳</div>
</div>
<div data-block="Geometric">
<div class="line">🞀🞁🞂🞃🞄🞅🞆🞇🞈🞉🞊🞋🞌🞍🞎🞏🞐🞑🞒🞓🞔🞕🞖🞗🞘🞙🞚🞛🞜🞝🞞🞟</div>
<div class="line">🞠🞡🞢🞣🞤🞥🞦🞧🞨🞩🞪🞫🞬🞭🞮🞯🞰🞱🞲🞳🞴🞵🞶🞷🞸🞹🞺🞻🞼🞽🞾🞿</div>
<div class="line">🟀🟁🟂🟃🟄🟅🟆🟇🟈🟉🟊🟋🟌🟍🟎🟏🟐🟑🟒🟓🟔</div>
</div>
<div data-block="CJK">
<div class="line">𠀀𪛖𪜀𫜴𫝀𫠝丽丸乁𠄢你侮侻倂偺備僧像㒞𠘺免兔兤具𠔜㒹內再𠕋冗冤仌</div>
<div class="line">冬况𩇟凵刃㓟刻剆割剷㔕勇勉勤勺包匆北卉卑博即卽卿卿卿𠨬灰及叟𠭣叫</div>
<div class="line">叱吆咞吸呈周咢哶唐啓啣善善喙喫喳嗂圖嘆圗噑噴切壮城埴堍型堲報墬𡓤</div>
<div class="line">売壷夆多夢奢𡚨𡛪姬娛娧姘婦㛮㛼嬈嬾嬾𡧈寃寘寧寳𡬘寿将当尢㞁屠屮峀</div>
<div class="line">岍𡷤嵃𡷦嵮嵫嵼巡巢㠯巽帨帽幩㡢𢆃㡼庰庳庶廊𪎒廾𢌱𢌱舁弢弢㣇𣊸𦇚形</div>
<div class="line">彫㣣徚忍志忹悁㤺㤜悔𢛔惇慈慌慎慌慺憎憲憤憯懞懲懶成戛扝抱拔捐𢬌挽</div>
<div class="line">拼捨掃揤𢯱搢揅掩㨮摩摾撝摷㩬敏敬𣀊旣書晉㬙暑㬈㫤冒冕最暜肭䏙朗望</div>
<div class="line">朡杞杓𣏃㭉柺枅桒梅𣑭梎栟椔㮝楂榣槪檨𣚣櫛㰘次𣢧歔㱎歲殟殺殻𣪍𡴋𣫺</div>
<div class="line">汎𣲼沿泍汧洖派海流浩浸涅𣴞洴港湮㴳滋滇𣻑淹潮𣽞𣾎濆瀹瀞瀛㶖灊災灷</div>
<div class="line">炭𠔥煅𤉣熜𤎫爨爵牐𤘈犀犕𤜵𤠔獺王㺬玥㺸㺸瑇瑜瑱璅瓊㼛甤𤰶甾𤲒異𢆟</div>
<div class="line">瘐𤾡𤾸𥁄㿼䀈直𥃳𥃲𥄙𥄳眞真真睊䀹瞋䁆䂖𥐝硎碌磌䃣𥘦祖𥚚𥛅福秫䄯穀</div>
<div class="line">穊穏𥥼𥪧𥪧竮䈂𥮫篆築䈧𥲀糒䊠糨糣紀𥾆絣䌁緇縂繅䌴𦈨𦉇䍙𦋙罺𦌾羕翺</div>
<div class="line">者𦓚𦔣聠𦖨聰𣍟䏕育脃䐋脾媵𦞧𦞵𣎓𣎜舁舄辞䑫芑芋芝劳花芳芽苦𦬼若茝</div>
<div class="line">荣莭茣莽菧著荓菊菌菜𦰶𦵫𦳕䔫蓱蓳蔖𧏊蕤𦼬䕝䕡𦾱𧃒䕫虐虜虧虩蚩蚈蜎</div>
<div class="line">蛢蝹蜨蝫螆䗗蟡蠁䗹衠衣𧙧裗裞䘵裺㒻𧢮𧥦䚾䛇誠諭變豕𧲨貫賁贛起𧼯𠠄</div>
<div class="line">跋趼跰𠣞軔輸𨗒𨗭邔郱鄑𨜮鄛鈸鋗鋘鉼鏹鐕𨯺開䦕閷𨵷䧦雃嶲霣𩅅𩈚䩮䩶</div>
<div class="line">韠𩐊䪲𩒖頋頋頩𩖶飢䬳餩馧駂駾䯎𩬰鬒鱀鳽䳎䳭鵧𪃎䳸𪄅𪈎𪊑麻䵖黹黾鼅</div>
<div class="line">鼏鼖鼻𪘀</div>
</div>
</div>
<div data-vo="Tr" class="test">
<div data-block="Miscellaneous">
<div class="line">〈〉</div>
</div>
<div data-block="CJK">
<div class="line">〈〉《》「」『』【】〔〕〖〗〘〙〚〛〜〝〞〟〰</div>
</div>
<div data-block="Katakana">
<div class="line">゠ー</div>
</div>
<div data-block="Small">
<div class="line">﹙﹚﹛﹜﹝﹞</div>
</div>
<div data-block="Halfwidth">
<div class="line">（）：；［］＿｛｜｝～｟｠￣</div>
</div>
</div>
<div data-vo="Tu" class="test">
<div data-block="CJK">
<div class="line">、。</div>
</div>
<div data-block="Hiragana">
<div class="line">ぁぃぅぇぉっゃゅょゎゕゖ゛゜</div>
</div>
<div data-block="Katakana">
<div class="line">ァィゥェォッャュョヮヵヶ</div>
</div>
<div data-block="Bopomofo">
<div class="line">ㄧ</div>
</div>
<div data-block="Katakana">
<div class="line">ㇰㇱㇲㇳㇴㇵㇶㇷㇸㇹㇺㇻㇼㇽㇾㇿ</div>
</div>
<div data-block="CJK">
<div class="line">㌀㌁㌂㌃㌄㌅㌆㌇㌈㌉㌊㌋㌌㌍㌎㌏㌐㌑㌒㌓㌔㌕㌖㌗㌘㌙㌚㌛㌜㌝㌞㌟</div>
<div class="line">㌠㌡㌢㌣㌤㌥㌦㌧㌨㌩㌪㌫㌬㌭㌮㌯㌰㌱㌲㌳㌴㌵㌶㌷㌸㌹㌺㌻㌼㌽㌾㌿</div>
<div class="line">㍀㍁㍂㍃㍄㍅㍆㍇㍈㍉㍊㍋㍌㍍㍎㍏㍐㍑㍒㍓㍔㍕㍖㍗㍻㍼㍽㍾㍿</div>
</div>
<div data-block="Small">
<div class="line">﹐﹑﹒</div>
</div>
<div data-block="Halfwidth">
<div class="line">！，．？</div>
</div>
<div data-block="Enclosed">
<div class="line">🈀🈁</div>
</div>
</div>
</div>
<script src="support/text-orientation.js"></script>